//Link => https://leetcode.com/problems/remove-duplicates-from-sorted-array
//----------- T.C = O(n) and S.C = O(1) ------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int idx = 1;
        int cnt = 1;//first element is at correct place
        for(int i=1;i<n;i++){
            if(nums[i]!=prev){
                prev = nums[i];
                nums[idx++] = nums[i];
                cnt++;
            }
        } 
        return cnt;
    }
};
int main() {

    return 0;
}