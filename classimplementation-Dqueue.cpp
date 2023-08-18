#include <iostream>
using namespace std;
class DQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    DQueue()
    {
        size = 10000;
        arr = new int[size];
        int front = -1;
        int rear = -1;
    }
    int push_front(int val)
    {
        // checking full or not
        if((front == 0) && (rear = size-1) || (rear == (front-1)%(size-1)))
    {
        return -1 ; // queue is full
    }
    if(front == -1){
        front = rear = 0 ; 
    }
    if(front == 0 && rear!=size-1){
        front = size-1 ; 
    }else{
        front -- ; 
    }
    arr[front] = val ; 
    return 0 ; 
    }


    int push_back( int val ){
         if((front == 0) && (rear = size-1) || (rear == (front-1)%(size-1)))
    {
        return -1 ; // queue is full
    }
    if(rear == size-1 && front!=0){
        rear = 0 ; 
    }else{
        rear ++ ; 
    }
    arr[rear] = val ;
    return 0 ; 

    }


    // dequeue and popfront same...
    int pop_front(){
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
 int pop_back(){
    if(front == -1 )
    {
        return -1 ; // queue is empty, nothing to pop
    }

    int ans  = arr[rear] ; 
    arr[rear] = -1 ;
 

  if(front == rear){
        front = -1 ;
        rear = -1 ; 
    }
    if(rear == 0){
        rear = size-1 ;
    }else{
        rear--;
    }

return ans ; 
};
int main()
{
    return 0;
}