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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        int sum=0;
        vector<int>ans;
        while(temp!=NULL ){
            if(temp->val==0){
                ans.push_back(sum);
                sum=0;
               
            }

            sum+=temp->val;
            temp=temp->next;

        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int i = 0; i < ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }

        return dummy->next;
        
    }
};