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
    void DFS(TreeNode* root,string str,vector<string> &res){
        if(root->left==NULL && root->right==NULL){
            str=str+to_string(root->val);
            res.push_back(str);
            return;
        }
        str=str+to_string(root->val)+"->";
        if(root->left) DFS(root->left,str,res);
        if(root->right) DFS(root->right,str,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root==NULL) return res;
        DFS(root,"",res);
        return res;
    }
};