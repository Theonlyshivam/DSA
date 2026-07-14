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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr; // Handle empty list edge case

        stack<int> st;
        ListNode* temp = head;

        // Step 1: Push all values onto the stack
        while (temp != nullptr) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Step 2: Pop values back into the nodes to reverse them
        temp = head;
        while (temp != nullptr) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head; // Don't forget to return the modified list
    }
};
