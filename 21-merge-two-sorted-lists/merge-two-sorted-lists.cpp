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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1 != NULL || temp2!=NULL){
            if(temp1) ans.push_back(temp1->val);
            if(temp2) ans.push_back(temp2->val);
            if(temp1) temp1=temp1->next;
            if(temp2) temp2=temp2->next;
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n==0) return NULL;
        ListNode* head = new ListNode(ans[0]);
        ListNode* curr = head;

        for (int i = 1; i < n; i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }
        return head;

    
    }
};