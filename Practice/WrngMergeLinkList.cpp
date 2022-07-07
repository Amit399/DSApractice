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
        if(list1->val<head->val)
        {
            head=list1;
            temp=list1;
            head=head->next;
        }
        else{
            head=list2;
            temp=list2;
            head2->next;
        }
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                temp->next=list1;
                head=list1->next;
                temp=temp->next;
            }
            else
            {
                temp->next=list2;
                head=list2->next;
                temp=temp->next;
            }
        }
        
    }
};
