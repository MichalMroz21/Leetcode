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
     bool hasCycle(ListNode *head) {
        
        ListNode* fast = head;
        
        while(fast != nullptr){

            head = head->next;
            if(fast->next == NULL) break;
            fast = fast->next->next;

            if(head == fast) return true;
        }

        return false;


    }
};