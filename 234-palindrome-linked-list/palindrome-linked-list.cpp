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
    bool isPalindrome(ListNode* head) {
        
        vector<int>ans;
        ListNode* temp=head;
        ListNode* prev=NULL;
        
        while(temp!=NULL){
           
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        temp=prev;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>st=ans;
        reverse(st.begin(),st.end());
        return st==ans;

    }
};