/ User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s ; 
    
    for(int i = 0 ;i<k;i++){
        s.push(q.front()) ; 
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    // fetch n-k elements and push back into queue
    
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val) ;
    }
    
    
    return q ; 
}