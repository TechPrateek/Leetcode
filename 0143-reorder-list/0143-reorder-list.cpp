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
    void reorderList(ListNode* head) {
        stack<int>st;
        vector<int>nums;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            nums.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int n = nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            temp->val=nums[i];
            temp->next->val=nums[j];
            temp=temp->next->next;
            i++;
            j--;
        }
        if(i==j){
            temp->val=nums[i];
        }
        

    }
};