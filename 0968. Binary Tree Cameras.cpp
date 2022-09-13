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
    int cameras=0;
    string camera(TreeNode* root){
        if(root==NULL) return "ok";
        string left=camera(root->left);
        string right=camera(root->right);
        if(left=="want" || right=="want"){
            cameras++;
            return "provide";
        }
        else if(left=="provide" || right=="provide"){
            return "ok";
        }
        return "want";
    }
    int minCameraCover(TreeNode* root) {
        if(camera(root)=="want"){
            cameras++;
        }
        return cameras;
    }
};