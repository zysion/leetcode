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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int k= (l1->val+l2->val);
        int p = k/10;
        ListNode* result = new ListNode(k%10);
        l1=l1->next;
        l2=l2->next;
        ListNode* current=result;
        while(l1!=NULL || l2!=NULL)
        {
            int a,b;
            if(l1==NULL) a=0;
            else a=l1->val;
            if(l2==NULL) b=0;
            else b=l2->val;
            k= (a+b)+p;
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
            p=k/10;
            ListNode* newnode = new ListNode(k%10);
            newnode->next=NULL;
            current->next=newnode;
            current=current->next;

        }
        if(p!=0)
        {
            ListNode* final = new ListNode(1);
            current->next=final;
        }
        return result;

    };
};