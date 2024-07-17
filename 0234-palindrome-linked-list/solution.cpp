#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* current = head;
        
        // Push all elements of the list onto the stack
        while (current != nullptr) {
            s.push(current->val);
            current = current->next;
        }
        
        // Traverse the list again and compare with stack
        current = head;
        while (current != nullptr) {
            if (current->val != s.top()) {
                return false;
            }
            s.pop();
            current = current->next;
        }
        
        return true;
    }
};

