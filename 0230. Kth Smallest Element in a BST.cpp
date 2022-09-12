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
    int ans=-1;
    void smallest(TreeNode* root,int k,int &count){
        if(root!=NULL){
            smallest(root->left,k,count);
            count++;
            if(count==k){
                ans=root->val;return;
            } 
            smallest(root->right,k,count);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        smallest(root,k,count);
        return ans;
    }
};