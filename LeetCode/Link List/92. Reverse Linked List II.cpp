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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr||left==right)return head;
        ListNode* leftEnd=nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int i=1;
        while(curr!=nullptr&&i<=right){
            if(i==left-1&&left>0){
                leftEnd=curr;
                curr=curr->next;
            }
            else if(i>=left){
                ListNode* temp = curr->next; // Store the next node
                curr->next = prev;            // Reverse the current node's pointer
                prev = curr;                  // Move prev to current node
                curr = temp;                  // Move to the next node
            }
            else{
                curr=curr->next;
            }
            i++;
        }
        if(leftEnd!=nullptr&&leftEnd->next!=nullptr&&curr!=nullptr)leftEnd->next->next=curr;
        else if(leftEnd==nullptr&&curr!=nullptr)head->next=curr;
        if(leftEnd==nullptr)head=prev;
        else if(leftEnd!=nullptr)leftEnd->next=prev;
        return head;
    }
};
