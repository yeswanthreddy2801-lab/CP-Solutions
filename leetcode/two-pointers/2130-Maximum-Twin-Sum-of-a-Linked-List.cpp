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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        stack<int>st;
        int c=0;
        while(temp)
        {
            st.push(temp->val);
            temp=temp->next;
            c++;

        }
        int cn=c/2;
        int i=0;
        temp=head;
        int maxi=0;
        while(i<cn)
        {
            maxi=max(maxi,temp->val+st.top());
            st.pop();
            i++;
            temp=temp->next;
        }
        return maxi;
    }
};