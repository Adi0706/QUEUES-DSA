//{ Driver Code Starts
#include<iostream>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
      int balence = 0 ; 
      int deficit = 0 ;
      int start = 0 ; 
      
      for(int i = 0 ; i< n ; i++){
          balence = balence + p[i].petrol - p[i].distance ; 
          if(balence < 0){
              deficit+= balence; 
              start = i+1;
              balence = 0 ; 
          }
      }
      if(deficit + balence >=0){
          return start ; 
      }
      return -1 ;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
    return 0 ;
}

// } Driver Code Ends