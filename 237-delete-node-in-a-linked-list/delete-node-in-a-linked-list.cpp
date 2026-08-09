/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
    //Copy the next node to the current node and skip the next node 
        node->val=node->next->val;//copying happens 
        node->next=node->next->next;//skip  happens 
        
    }
};