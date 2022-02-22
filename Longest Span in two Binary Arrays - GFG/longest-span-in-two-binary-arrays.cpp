// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
     vector<int>diffMap(2*n+1,-1);
     int maxLength = 0;
     int pre1=0,pre2=0;
     int temp;
     for(int i =0 ;i<n;i++ ){
         pre1+=arr1[i];
         pre2+=arr2[i];
         temp = pre1-pre2;
         if(!temp){
             maxLength=i+1;
         }
         else if(diffMap[n+temp]==-1){
             diffMap[n+temp] = i;
         }
         else{
             maxLength = max(maxLength,i-diffMap[n+temp]);
         }
     }
     return maxLength;
   
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends