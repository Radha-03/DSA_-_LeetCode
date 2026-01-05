**
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
    ListNode* reverse(ListNode* head) {
        ListNode *prev=nullptr;
        ListNode *curr=head;
        while(curr!=nullptr){
            ListNode  *temp=curr->next;   
            curr->next=prev;             
            prev = curr;               
            curr=temp;                  
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *pretaill=head;
        ListNode *taill=head;
        ListNode *curr=head;
        ListNode *NewHead=NULL;
        int i=1;
        while(curr!=nullptr){
            ListNode *temp=curr->next;
            if(i%k==0)
            {
                curr->next=nullptr;
                ListNode *RNH=reverse(taill);//return reversse node head
                if(NewHead==NULL)NewHead=RNH;
                else{
                    pretaill->next=RNH;
                }
                taill->next=temp;
                pretaill=taill;
                taill=temp;
            }
            i++;
            curr=temp;
        }
        return NewHead;
    }
};
