//Link => https://leetcode.com/problems/move-zeroes
//----------- T.C = O(n) and S.C = O(1) ---------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]){
                nums[idx++]=nums[i];
            }
        }
        while(idx<n){
            nums[idx++]=0;
        }
    }
};
int main() {

    return 0;
}