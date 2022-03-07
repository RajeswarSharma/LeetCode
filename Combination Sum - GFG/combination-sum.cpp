// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>res;
    void sol(vector<int>&A,vector<int>comb,int sum,int index){
      
      if(sum == 0){
          sort(comb.begin(),comb.end());
         res.push_back(comb);
        return;       
      }
      else if(sum<0){
          return;
      }
      if(index==A.size()) return;
      
      
      //sum-=A[index];
      comb.push_back(A[index]);
      sol(A,comb,sum-A[index],index);
      comb.pop_back();
      sol(A,comb,sum,index+1);
    
  }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<int>aux={};
        vector<int>forSol;
        sort(A.begin(),A.end());
        forSol.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            if(A[i-1]!=A[i]){
                forSol.push_back(A[i]);
            }
        }
        sol(forSol,aux,B,0);
        return res;
        // Your code here
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends