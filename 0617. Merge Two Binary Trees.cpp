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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL) return NULL;
        int val1=(root1!=NULL)?root1->val:0;
        int val2=(root2!=NULL)?root2->val:0;
        TreeNode* root=new TreeNode(val1+val2);
        if(root1==NULL){
            root->left=mergeTrees(root1,root2->left);
            root->right=mergeTrees(root1,root2->right);
        }
        else if(root2==NULL){
            root->left=mergeTrees(root1->left,root2);
            root->right=mergeTrees(root1->right,root2);
        }
        else{
            root->left=mergeTrees(root1->left,root2->left);
            root->right=mergeTrees(root1->right,root2->right);
        }
        return root;
    }
};