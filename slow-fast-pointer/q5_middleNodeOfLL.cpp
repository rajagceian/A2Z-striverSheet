//Link => 

#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 }; 

 //------ Slow and Fast Pointer : T.C = O(n) and S.C = O(1) ----
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=nullptr) slow=slow->next; // for even Length LL
        return slow;
    }
};
int main() {

    return 0;
}