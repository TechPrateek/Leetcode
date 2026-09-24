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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        ListNode* tail = head;
        int len=1;
        while( tail ->next != NULL ){
            len++;
            tail=tail->next;
        }
        if(k % len==0){
            return head;
        }
        k=k%len;
        tail->next=head;
        int res=len-k;
        tail=head;
        while(tail!=NULL){
            res--;
            if(res==0){
                head=tail->next;
                tail->next=NULL;
            }
            tail=tail->next;
        }
        return head;
    }
};