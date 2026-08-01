//link => https://leetcode.com/problems/reorder-list

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* NEXT;
        while(curr){
            NEXT=curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* half = reverse(slow->next);
        slow->next = nullptr;
        while(half){
            ListNode* t1 = head->next;
            ListNode* t2 = half->next;
            head->next = half;
            head->next->next = t1;
            half = t2;
            head = t1;
        }
    }
};

int main() {
    return 0;
}