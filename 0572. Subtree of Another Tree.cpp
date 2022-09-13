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
    bool checkval(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL){
            return true;
        }
        else if(root && subRoot){
            if(root->val!=subRoot->val) return false;
            return checkval(root->left,subRoot->left) && checkval(root->right,subRoot->right);
        }
        else{
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(checkval(root,subRoot)){
            return true;
        }
        else{
            if(root==NULL) return false;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};