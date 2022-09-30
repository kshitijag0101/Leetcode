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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode(0);
        temp->next=head;        
        ListNode* tail=temp;
        ListNode* curr=head;
        while(curr && curr->next){
            ListNode* temp=curr->next;
            ListNode* next=temp->next;
            temp->next=curr;
            curr->next=next;
            tail->next=temp;
            tail=curr;
            curr=next;
        }
        return temp->next;
    }
};