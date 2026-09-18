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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* node = new ListNode(-1);
        ListNode* temp=node;
        node->next=head;
        while( temp->next!=NULL){
            
            if(temp!=NULL && temp->next->val==val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return node->next;
    }
};