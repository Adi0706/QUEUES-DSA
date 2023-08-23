#include<iostream>
#include<unordered_map>
#include<queue>
#include<string>
using namespace std;
class Solution{
    public:
    string FirstNonRepeating(string A){
        //to store the count of the characters in the string 
        unordered_map<char,int> count ;
        queue<char> q ; 
        string ans ="";

        for(int i = 0 ; i < A.length() ; i++){
            char ch = A[i] ; 

            //keeping the count of every character in the map
            count[ch] ++ ;
            q.push(ch) ; 


            //checking repeating or non repeating
            while(!q.empty()){
                if(count[q.front()] > 1 )
                {
                    //repeating -- we will pop it 
                    q.pop() ; 
                }else{
                    ans.push_back(q.front()) ; 
                    break ; 
                }
            }
            if(q.empty()){
                ans.push_back('#') ; 
            }


        }
        return ans ; 
    }
};

int main()
{
    Solution s ; 
    string input ;
    cout<<"Enter a string"<<endl;
    cin>>input ;

cout<<"the answer is : "<<endl;
   cout<< s.FirstNonRepeating(input);
return 0;
}