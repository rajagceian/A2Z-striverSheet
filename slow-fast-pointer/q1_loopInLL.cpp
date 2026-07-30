//Link => https://leetcode.com/problems/linked-list-cycle

//---------- T.C = O(n) and S.C = O(1) -------------
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

bool hasCycle(ListNode *head) {
    if(!head) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast) return true;
    }
    return false;
}
int main() {

    return 0;
}