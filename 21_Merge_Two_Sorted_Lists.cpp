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
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* current=new ListNode();
        ListNode* result=current;
        while(l1!=nullptr || l2!=nullptr)
        {
            if(l1==nullptr) {
                current->next=new ListNode(l2->val);
                l2=l2->next;
            }
            else if(l2==nullptr) {
                current->next = new ListNode(l1->val);
                l1=l1->next;
            }
            else
            {
                if(l1->val>=l2->val) {
                    current->next=new ListNode(l2->val);
                    l2=l2->next;
                }
                else if(l1->val<l2->val) {
                    current->next = new ListNode(l1->val);
                    l1=l1->next;
                }
            }
            current= current->next;
        }
        return result->next;
    }
};