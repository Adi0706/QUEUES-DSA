#include<iostream>
using namespace std;
class kqueue{
    public:
    int n ;
    int k ; 
    int *front ;
    int *rear;
    int *arr;
    int freespot;
    int *next;


    public:
    kqueue(int n , int k){
        this->n = n ; 
        this-> k = k ;
        front = new int[k] ; 
        rear = new int[k];


        for(int i = 0 ; i<k;i++){
            front[i] = -1 ;
            rear[i] = -1 ; 
        }
         next= new int[n];
        for(int i =0;i<n;i++){
            next[i] = i+1 ; 
        }
        next[n-1] = -1;
        
       
        arr = new int[n];
        freespot = 0 ; 
    }

void push(int data,int qn){
    //overflow check

    if(freespot == -1){
        cout<<"no free space"<<endl;
        return ; 
    }

    //find first free index
    int index = freespot;
    //update freespot
    freespot = next[index]; 


    //check whether first elemnt
    if(front[qn-1]==-1){
        front[qn-1] = index;
    }else{
        //link new elemnt to prev elemnt
        next[rear[qn-1]] = index ; 
    }

    //update next 
    next[index] = -1 ;
    //update rear 
    rear[qn-1] = index ; 
    //push element 
    arr[index] = data ; 


}
int pop(int qn){
    //underflow check
    if(front[qn-1]==-1){
        cout<<"queue underflow"<<endl;
        return -1; 
    }
    //find index to pop 
    int index = front[qn-1] ; 
    //front move forward
    front[qn-1] = next[index] ; 

    //free slot handle
    next[index]=freespot; 
    freespot = index ; // new freespot
    return arr[index] ; 
}

    
};
int main()
{
    kqueue q(10,3);
    q.push(2,1);
    q.push(5,1);
    q.push(3,2) ; 
    
    cout<<q.pop(1)<<endl;
    cout<<q.pop(2)<<endl;
    cout<<q.pop(1)<<endl;
    
return 0;
}