//Link => https://leetcode.com/problems/check-if-array-is-sorted-and-rotated

//-------- T.C = O(n) and S.C = O(1) ------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int breakPoint = 0;
        int prev = -1;
        for(int x : nums){
            if(prev>x){
                breakPoint++;
            }
            prev = x;
        }
        if(nums[0]<*nums.rbegin()) breakPoint++;
        return breakPoint<=1;
    }
};
int main() {

    return 0;
}