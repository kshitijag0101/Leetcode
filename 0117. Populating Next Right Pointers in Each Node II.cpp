/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n-1;i++){
                Node* temp=q.front();
                q.pop();
                temp->next=q.front();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            Node* tmp=q.front();
            q.pop();
            tmp->next=NULL;
            if(tmp->left!=NULL) q.push(tmp->left);
            if(tmp->right!=NULL) q.push(tmp->right);
        }
        return root;
    }
};