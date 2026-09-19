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
        int cnt=0;
        ListNode* temp=head;
        
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* m=head->next;
            delete head;
            return m;
        }
        int res=cnt-n;
        temp=head;
        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head;
    }
};