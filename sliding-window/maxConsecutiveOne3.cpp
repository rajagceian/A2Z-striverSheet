//Link = >https://leetcode.com/problems/max-consecutive-ones-iii/

#include <bits/stdc++.h>
using namespace std;

//--------- T.C = O(n) and S.C = O(1) ------------
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int zero = 0;
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            while(zero>k){
                if(nums[j]==0) zero--;
                j++;
            }
            ans = max(ans,(i-j+1));
        }
        return ans;
    }
};

int main() {
    return 0;
}