// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long filled = 0;
        long long water = 0;
        vector<int>leftMost(n,0);
        vector<int>rightMost(n,0);
        int tempMax = arr[0];
        for(int i = 0;i<n;i++){
            leftMost[i] = tempMax;
            if(arr[i]>tempMax) tempMax = arr[i];       
        }
        tempMax = arr[n-1];
        for(int i = n-1;i>=0;i--){
            rightMost[i] = tempMax;
            if(arr[i]>tempMax) tempMax = arr[i];
        }
       for(int i = 0;i<n;i++){
           if(arr[i]>=leftMost[i] || arr[i]>= rightMost[i]){
               filled+=water;
               water = 0;
           }
           else{
               water+= min(leftMost[i],rightMost[i]) - arr[i];
           }
       }
    
        return filled;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends