/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// t O(1) s O(1)
void deleteNode(struct ListNode* node) {
    struct ListNode* next = node->next;
    node->val = next->val;
    node->next = next->next;
}