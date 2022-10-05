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
    void insert(int val,TreeNode* root,int depth,int n){
        if(root==NULL) return;
        if(depth==n-1){
            TreeNode* node=root->left;
            root->left=new TreeNode(val);
            root->left->left=node;
            node=root->right;
            root->right=new TreeNode(val);
            root->right->right=node;
        }
        else{
            insert(val,root->left,depth+1,n);
            insert(val,root->right,depth+1,n);
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        insert(val,root,1,depth);
        return root;
    }
};