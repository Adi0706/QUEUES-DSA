#include<iostream>
using namespace std;
class Circular_Queue{
    private :
    int *arr;
    int front;
    int rear ;
    int size;
    public:
 Circular_Queue(){
     size=10000;
    arr= new int [size] ; 
    int front = -1 ;
    int rear = -1 ; 
 }
 int enqueue(int data){
    if((front == 0) && (rear = size-1) || (rear == (front-1)%(size-1)))
    {
        return -1 ; // queue is full
    }
    if(front == -1 ) // first element push 
    {
        front = rear = 0 ; 
        arr[rear] = data ; 

    }
    if(rear = size-1 && front!=0){ // if front is somewhere in the middle of the queue nd rear is at n-1 bring the rear at the start--> circular queue concept
        rear = 0 ; 
        arr[rear] = data ; 
    }else {
        rear ++ ;
        
    }
    arr[rear] = data ; 
    return 0 ; //push/enqueue successfull ; 
 }

 int Dequeue () {
    //checking for empty()
    if(front == -1 )
    {
        return -1 ; // queue is empty, nothing to pop
    }
    //single element popping 
    int ans  = arr[front] ; 
    arr[front] = -1 ;
    if(front == rear){
        front = -1 ;
        rear = -1 ; 
    }
    //if while popping the elements our front reaches n-1 then send it to the starting -- > circular queue concept 
    if(front == size-1){
        front = 0 ; // to maintain cyclic nature 
    }else {
        front ++ ; 
        
    }
    return ans ; 
    
 }

    

};
int main()
{
return 0;
}