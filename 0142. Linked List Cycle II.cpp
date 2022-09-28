/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow=head,*fast=head,*meet=NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                meet=slow;
                break;
            }
        }
        if(meet==NULL) return NULL;
        ListNode* start=head,*end=meet;
        while(start!=end){
            start=start->next;
            end=end->next;
        }
        return start;
    }
};