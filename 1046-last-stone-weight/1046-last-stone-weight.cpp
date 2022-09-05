class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
    priority_queue<int> q;
    for (int i =0;i<arr.size();i++){
        q.push(arr[i]);
    }
    while(!q.empty()){
        int a  = q.top();
        q.pop();
        if(q.empty()) return a;
        int b = q.top();
        
        q.pop();
        if(a!=b) q.push(a-b);
        if(q.size()==1) return q.top();
    }
    return 0;    
    }
};