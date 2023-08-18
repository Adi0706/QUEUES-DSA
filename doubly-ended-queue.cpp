#include<iostream>
#include<queue>
using namespace std;

int main()
{

deque<int> q ; 

q.push_front(1); 
q.push_back(5) ; 
// 1 5 

// cout<<q.front()<<endl;
// cout<<q.back()<<endl;


q.pop_front(); // 1 will be popped ; 
q.pop_back();//2 will be popped ; 

cout<<q.front()<<endl;
cout<<q.back()<<endl;



return 0;
}