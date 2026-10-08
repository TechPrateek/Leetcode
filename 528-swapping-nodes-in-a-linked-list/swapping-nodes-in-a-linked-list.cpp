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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int size=0;
        int value1;
        while(temp != NULL){
            size++;
            if(size==k){
                value1=temp->val;
            }
            temp = temp->next;
        }
        int n = size-k;
        int value2;
        temp=head;
        while(n--){
            temp = temp->next;
        }
        value2 = temp->val;



        temp = head;

        int count = 1;
        while (count < k) {
            temp = temp->next;
            count++;
        }

        // Swap values
        temp->val = value2;

        // Find kth node from end
        temp = head;
        n = size - k;

        while (n--) {
            temp = temp->next;
        }

        temp->val = value1;
        return head;
    }
};