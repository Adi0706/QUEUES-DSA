/Function to reverse the queue.
class Solution
{
    public:
    
    void solve(queue<int> &q) {
        //base condition
        if(q.empty()) {
            return ; 
        }
        
        
        int num = q.front() ;
        q.pop() ; 
        
        solve(q) ; 
        
        q.push(num) ; 
        
        
    }
    
    stack<int> s ; 
    queue<int> rev(queue<int> q)
    {
        solve(q) ; 
        
        return q ; 
        
    }
};