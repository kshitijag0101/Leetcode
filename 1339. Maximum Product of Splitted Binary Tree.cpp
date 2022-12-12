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
    int postorder(TreeNode* root,unordered_map<TreeNode*,int>& prefix){
        if(root==NULL) return 0;
        int l=postorder(root->left,prefix);
        int r=postorder(root->right,prefix);
        prefix[root]+=(l+r+root->val);
        return prefix[root];
    }
    int maxProduct(TreeNode* root) {
        unordered_map<TreeNode*,int> prefix;
        postorder(root,prefix); 
        int total=prefix[root];
        long long res=0;
        for(auto& x:prefix){
            if(x.first==root) continue;
            long long src=x.second;
            long long dest=total-src;
            long long temp=src*dest;
            if(temp>res){
                res=temp;
            }
        }
        return res%1000000007;
    }
};