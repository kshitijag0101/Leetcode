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
    ListNode* reverseList(ListNode* start,ListNode* end){
        ListNode* curr=start->next,*prev=start,*next,*temp=curr;
        while(curr!=end){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        start->next=prev;
        temp->next=curr;
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1){
            return head;
        }
        ListNode* temp=new ListNode(0);
        temp->next=head;
        int count=0;
        ListNode* start=temp,*end=head;
        while(end!=NULL){
            count++;
            if(count%k==0){
                start=reverseList(start,end->next);
                end=start->next;
            }
            else{
                end=end->next;
            }
        }
        return temp->next;
    }
};