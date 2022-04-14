// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int min = INT_MAX;
        int max = -1;
        bool flag = false;
        for(int i =0;i<n;i++){
            if(arr[i]<0) arr[i] = 0;
            if(arr[i]<min && arr[i]!= 0 ){
                min = arr[i];
            }
            if(arr[i]>max&&arr[i]!=0) max = arr[i];
        }
        if(max==min && max != 1) return 1;
        if(max==min && min ==1) return 2;
        if(max ==-1) return 1;
        vector<int>v(max,0);
        // cout<<max<<endl;
        for(int i =0;i<n;i++){
            if(arr[i]) v[arr[i]-1]++;
        }
        for(int i =0;i<max;i++){
            if(!v[i]) return i+1;
        }
        return max+1;
        // Your code here
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends