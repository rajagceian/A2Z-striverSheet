//Link => 

//---------- T.C = O(n) and S.C = O(1)-------
#include <bits/stdc++.h>
using namespace std;
class ListNode{
public:
    ListNode *next;
    int val;
    ListNode(int val){
        this->val = val;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;

                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return nullptr;
    }
};
int main() {

    return 0;
}