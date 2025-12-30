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
        ListNode *head=nullptr;
        ListNode *p=head;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            int sum=carry;
            if(l1!=nullptr)sum+=l1->val;
            if(l2!=nullptr)sum+=l2->val;
            ListNode *t=new ListNode;
            t->next=nullptr;
            t->val=sum%10;
            carry=sum/10;
            if(head==nullptr){
                head=t;
                p=t;
            }
            else{   
                p->next=t;
                p=p->next;
             }
             if(l1!=nullptr)l1=l1->next;
             if(l2!=nullptr)l2=l2->next;
        }
        return head;
    }
};
