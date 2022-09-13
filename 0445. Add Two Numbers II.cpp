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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode*> first,second;
        while(l1){
            first.push(l1);
            l1=l1->next;
        }
        while(l2){
            second.push(l2);
            l2=l2->next;
        }
        int c=0;
        ListNode* nextnode=NULL;
        while(!first.empty() || !second.empty() || c){
            int n1=0,n2=0;
            if(!first.empty()){
                n1=first.top()->val;
                first.pop();
            }
            if(!second.empty()){
                n2=second.top()->val;
                second.pop();
            }
            int sum=n1+n2+c;
            ListNode* node=new ListNode(sum%10);
            c=sum/10;
            node->next=nextnode;
            nextnode=node;
        }
        return nextnode;
    }
};