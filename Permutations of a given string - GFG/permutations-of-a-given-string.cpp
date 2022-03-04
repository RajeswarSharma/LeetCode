// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	vector<string>permutations;
	void getPermutaions(string s,int index){
	    if(index==s.length()-1)
	    {
	        this->permutations.push_back(s);
	    }
	    for(int i = index;i<s.length();i++){
	        swap(s[i],s[index]);
	        getPermutaions(s,index+1);
	    }
	    return;
	}
	public:
		vector<string>find_permutation(string S)
		{
		    sort(S.begin(),S.end());
		    this->getPermutaions(S,0);
		    return this->permutations;
		}
		
		
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends