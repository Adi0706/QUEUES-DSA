#include<iostream>
using namespace std ; 
class Queue{
    private:
    int *arr ; 
    int front , rear ; 
    int size ; 
    public:
    Queue(int s){
        this->front = 0 ;
        this->rear = 0 ; 
        this->size = s ; 
        arr=new int[s] ; 
    }
    
    void push(int val){
        if(rear == size){
            cout<<"queue is full"<<endl;
        }else {
            arr[rear] = val ; 
            rear ++ ;  
        }
    }
    void pop(){
        if(front == rear ){
            cout<<"empty "<<endl ; 
        }
        else{
            arr[front] = -1 ; 
            front ++ ;
            if(front == rear){
                front = 0 ;
                rear = 0 ; 
            }
        }
    }
    bool empty(){
        if(front == rear) return true ;
        else 
        return false ; 
    }

    int top(){
        if(front == rear){
            return -1;
        }else {
            return arr[front] ; 
        }
    }
};

int main()
{
    Queue q(5) ; 

    q.push(1) ;
    q. push(2) ; 
    q. push(3) ; 


    q.pop();
        // cout<<"top element is : "<< q.top() ; 

   cout<<"the queue is empty or not ? "<< q.empty() ; 

return 0;
}