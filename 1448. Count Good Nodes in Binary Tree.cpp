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
    void preorder(TreeNode* root,int& res,int mx){
        if(root!=NULL){
            if(root->val>=mx){
                mx=root->val;
                res++;
            }
            preorder(root->left,res,mx);
            preorder(root->right,res,mx);
        }
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int res=0,mx=INT_MIN;
        preorder(root,res,mx);
        return res;
    }
};