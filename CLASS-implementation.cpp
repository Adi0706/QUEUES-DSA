#include<iostream>
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
        if(front == rear) // empty()
        {
            arr[rear] = val ;
            rear ++ ; 
        }
        else{
            cout<<"queue is full :"<<endl ; 
        }
    }
    void pop(){
        if(front!=rear){
            arr[front] = -1 ;
            front++ ; 
        }else{
            cout<<"stack is empty , nothing to pop" <<endl;
        }
    }
    bool empty(){
        if(front == rear) return true ;
        else 
        return false ; 
    }
    int top(){
        if(!empty()){
            return front ;
        }

    }
};
using namespace std;
int main()
{
return 0;
}