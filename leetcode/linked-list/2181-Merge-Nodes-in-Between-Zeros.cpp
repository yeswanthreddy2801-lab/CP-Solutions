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
        ListNode* temp=head;
        ListNode* ans=new ListNode();
        ListNode* anss;
        int sum=0;
        int flag=0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                if(flag==0)
                {
                    ans=new ListNode(sum);
                    anss=ans;
                    flag=1;
                }
                else 
                {
                    ans->next=new ListNode(sum);
                    ans=ans->next;
                }

                sum=0;

            }
            else 
            {
                sum+=temp->val;
            }
            temp=temp->next;
        }
        return anss->next;
    }
};