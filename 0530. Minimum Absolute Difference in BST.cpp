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
    TreeNode* prev=NULL;
    int mini=INT_MAX;
    void find(TreeNode* root){
        if(root->left) find(root->left);
        if(prev) mini=min(mini,abs(root->val-prev->val));
        prev=root;
        if(root->right) find(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        find(root);
        return mini;
    }
};