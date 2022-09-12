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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> res;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val<x){
                res.push_back(curr->val);
            }
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            if(curr->val>=x){
                res.push_back(curr->val);
            }
            curr=curr->next;
        }
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=res[i++];
            curr=curr->next;
        }
        return head;
    }
};