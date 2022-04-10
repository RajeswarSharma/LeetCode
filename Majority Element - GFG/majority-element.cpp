// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int max = -1;
        int maxK = -1;
        unordered_map<int,int> map;
        for(int i =0;i<size;i++){
            int elem = a[i];
            if(map.find(elem)==map.end()){
                map[elem] = 0;
            }
            else map[elem]++;
        }
        for(auto itr : map){
            if(itr.second>max && itr.second>=size/2){
                max = itr.second;
                maxK = itr.first;
           
            }
            // cout<<itr.first<<" "<<itr.second<<endl;
        }
        return maxK;
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

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
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends