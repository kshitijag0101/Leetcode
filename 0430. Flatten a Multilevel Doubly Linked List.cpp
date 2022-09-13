/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* sol(Node* head) {
        Node* prev=NULL,*curr=head;
        while(curr!=NULL){
            prev=curr;
            if(curr->child!=NULL){
                Node* tail=sol(curr->child);
                tail->next=curr->next;
                if(curr->next!=NULL){
                    curr->next->prev=tail;
                }
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=NULL;
                curr=tail->next;
                prev=tail;
            }
            else{
                curr=curr->next;
            }
        }
        return prev;
    }
    Node* flatten(Node* head) {
        sol(head);
        return head;
    }
};