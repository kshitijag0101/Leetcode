/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* root){
        if(root==NULL || root->next==NULL) return root;
        ListNode* rest_head=reverseList(root->next);
        ListNode* rest_tail=root->next;
        rest_tail->next=root;
        root->next=NULL;
        return rest_head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        ListNode* slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow->next);
        ListNode* curr=head;
        while(rev!=NULL){
            if(rev->val!=curr->val) return false;
            curr=curr->next;
            rev=rev->next;
        }
        return true;
    }
};