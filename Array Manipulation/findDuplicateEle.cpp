//Link => 

#include <bits/stdc++.h>
using namespace std;
//------ M-1 => Binary Search => T.C = O(nlogn) and S.C = O(1)-----
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size() - 1, cnt;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for (int n : nums) {
                if (n <= mid)
                    ++cnt;
            }
            // binary search on left
            if (cnt <= mid)
                low = mid + 1;
            else
                // binary search on right
                high = mid - 1;
        }
        return low;
    }
};

//------ M-1 => Floyd's Cycle Detection (Tortoise and Hare) => T.C = O(n) and S.C = O(1)-----

class Solution1 {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Find the meeting point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find the entrance of the cycle
        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
int main() {

    return 0;
}