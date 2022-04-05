// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        int curr = arr[0];
        int result1= arr[0];
        int sum = 0;
         for(int i =1;i<num;i++){
           curr = max(arr[i],arr[i]+curr);
           result1 = max(curr,result1);
           
       }
       if(result1<0) return result1;
        for(int i = 0;i<num;i++){
        sum+=arr[i];
        arr[i] = -arr[i];
        }
       curr = arr[0];
       int result2 = arr[0];
       
       for(int i =1;i<num;i++){
           curr = max(arr[i],arr[i]+curr);
           result2 = max(curr,result2);
           
       }
       result2 = sum + result2;
       
        return  max(result1,result2);
        // your code here
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends