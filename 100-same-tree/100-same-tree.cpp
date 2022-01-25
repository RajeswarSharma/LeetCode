/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //    vector<int> a = BFS(p);
    //    vector<int> b = BFS(q); 
    //     if(a.size()!=b.size()){
    //         return false;
    //     }
    //     for(int i =0 ;i<a.size();i++){
    //         if(a[i]!=b[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
     bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(!q&&!p) return true;
        if(!q&&p) return false;
         if(q&&!p) return false;
         queue<TreeNode*> queueP;
        queueP.push(p);
        queue<TreeNode*> queueQ;
        queueQ.push(q);
        while(!queueP.empty()&&!queueQ.empty())
        {
            if( queueP.front()->val != queueQ.front()->val) return false;
            if(queueP.front()->right==NULL && queueQ.front()->right != NULL) return false;
            if(queueP.front()->left!=NULL && queueQ.front()->left == NULL) return false;
        
            if(queueP.front()->right) queueP.push(queueP.front()->right);
            if(queueP.front()->left) queueP.push(queueP.front()->left);

            if(queueQ.front()->right) queueQ.push(queueQ.front()->right) ;
            if(queueQ.front()->left) queueQ.push(queueQ.front()->left);

         queueP.pop();
         queueQ.pop();
        }
         if(queueQ.empty() && queueP.empty()) return true;
         return false;
         
     }
    
    vector<int> BFS(TreeNode* root){
        queue<TreeNode*> seq;
        TreeNode* temp ;
        vector<int> v;
        seq.push(root);
        while(!seq.empty()){
            temp = seq.front();
            seq.pop();
            v.push_back(temp->val);
            if(temp->left){
                seq.push(temp->left);
            }  
            if(temp->right){
                seq.push(temp->right);
            }
        }
        return v;
    }
};