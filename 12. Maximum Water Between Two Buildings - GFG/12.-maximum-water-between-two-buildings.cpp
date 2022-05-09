// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        int left = 0;
        int right = n-1;
        int maxWater = 0;
        int temp = 0;
        while(left<right){
            temp = min(height[left],height[right])*(right-left-1);
            maxWater = max(temp,maxWater);
            if(height[left]<=height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        //Your code here
    
        return maxWater;
    } 
};



// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 

  // } Driver Code Ends