// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<int, int> findRepeating(int *arr, int n){
        int left = 0;
        int right = n-1;
        int count = 0;
        pair<int ,int > res = {-1,-1};
        while(left<right){
            int mid = (left+right)/2;
            if(mid-1>=0 && arr[mid-1] == arr[mid]){
                res.first = arr[mid];
                if(arr[left] == arr[mid]) count += mid - left;
                else{
                    count += (mid-left)-(arr[mid] - arr[left]);
                }
                
            }
            if(mid+1<n&&arr[mid+1]==arr[mid]){
                res.first = arr[mid];
                if(arr[right] == arr[mid]) count += right - mid;
                else{
                  count+=(right-mid)-(arr[right]-arr[mid]);  
                }
            }
            if(res.first != -1){
                 res.second = count+1;
                 break;
            }
            if(mid-left == arr[mid]-arr[left]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
       
        return res;
        //code here
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<int, int> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}  // } Driver Code Ends