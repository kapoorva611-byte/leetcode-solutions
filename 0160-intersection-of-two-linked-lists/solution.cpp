class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        while (headA != nullptr) {
            ListNode* temp = headB;
            while (temp != nullptr) {
                if (headA == temp) {
                    return headA; 
                }
                temp = temp->next;
            }
            headA = headA->next;
        }
        return nullptr;
    }
};

