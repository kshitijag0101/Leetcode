/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void findParent(map<TreeNode*,TreeNode*>& mp,TreeNode* root){
        if(root==NULL) return;
        if(root->left!=NULL){
            mp[root->left]=root;
        }
        if(root->right!=NULL){
            mp[root->right]=root;
        }
        findParent(mp,root->left);
        findParent(mp,root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> res;
        if(root==NULL) return res;
        map<TreeNode*,TreeNode*> mp;
        findParent(mp,root);
        set<TreeNode*> s;
        queue<TreeNode*> q;
        q.push(target);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                s.insert(temp);
                if(k==0){
                    res.push_back(temp->val);
                }
                if(mp.find(temp)!=mp.end() && s.find(mp[temp])==s.end()){
                    q.push(mp[temp]);
                }
                if(temp->left!=NULL && s.find(temp->left)==s.end()){
                    q.push(temp->left);
                }
                if(temp->right!=NULL && s.find(temp->right)==s.end()){
                    q.push(temp->right);
                }
            }
            k--;
            if(k<0) break;
        }
        return res;
    }
};