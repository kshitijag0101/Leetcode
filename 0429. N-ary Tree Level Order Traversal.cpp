/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> v;
            for(int i=0;i<size;i++){
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                vector<Node*> t=temp->children;
                for(int i=0;i<t.size();i++){
                    if(t[i]!=NULL) q.push(t[i]);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};