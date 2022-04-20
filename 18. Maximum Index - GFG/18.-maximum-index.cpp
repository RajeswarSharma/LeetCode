// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
   
    int maxIndexDiff(int arr[], int N) 
    { 
       
        int max_dis = -1;
        int curr_max = N-1;
        vector<int>aux(N);
        for(int i =N-1;i>=0;i--){
            if(arr[curr_max] < arr[i]){
                curr_max = i;
            }
            aux[i] = curr_max;
        }
        
        int x=0, y = aux[0];
        max_dis = -1;
        while(y<N&&x<=y){
            
            if(arr[x]<=arr[y])
            {
                max_dis = max(max_dis,y-x);
                if(y+1>=N) break;
                y = aux[y+1];
                // cout<<y<<endl;
            }
            else x++;
        }
          return max_dis;
    }
};
// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends