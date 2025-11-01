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
    ListNode* removeElements(ListNode* head, int val) {
        // Dummy node to simplify deletions (even at head)
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next; // delete node
            } else {
                curr = curr->next; // move forward
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
