#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q ; 
//pushing elements 
q.push(1) ; 
q.push(5);
q.push(7);
q.push(8) ; 

cout<<"size of the queue is : " <<q.size()<<endl ; // size() of queue

q.pop() ; // pops 1 
q.pop(); // 5 


cout<<"After popping ,size of the queue is : " <<q.size() <<endl; // size() of queue
  cout<<"elements in queue are : " ; 
while(!q.empty()){//empty() function to check queue empty or not 
    int p = q.front() ; // first element popping and printing every popped element
  
    cout<<" "<<p;
    q.pop() ; 
}




return 0;
}