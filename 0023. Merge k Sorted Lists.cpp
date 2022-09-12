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
    ListNode* sortedmerge(ListNode* a,ListNode* b){
        if(a==NULL) return b;
        if(b==NULL) return a;
        ListNode* head=NULL,*tail=NULL;
        if(a->val<=b->val){
            head=tail=a;
            a=a->next;
        }
        else{
            head=tail=b;
            b=b->next;
        }
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else{
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }
        if(a==NULL) tail->next=b;
        else tail->next=a;
        return head;
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode* temp=lists[0];
        for(int i=1;i<lists.size();i++){
            temp=sortedmerge(temp,lists[i]);
        }
        return temp;
    }
};