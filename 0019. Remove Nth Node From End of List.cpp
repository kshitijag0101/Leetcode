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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        for(ListNode* curr=head;curr!=NULL;curr=curr->next){
            len++;
        }
        if(len<n) return head;
        ListNode *curr=head,*prev=NULL;
        for(int i=1;i<len-n+1;i++){
            prev=curr;
            curr=curr->next;
        }
        if(prev==NULL){
            head=curr->next;
        }
        else{
            prev->next=curr->next;
        }
        return head;
    }
};