//Link = > https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description

#include <bits/stdc++.h>
using namespace std;

//------ T.C = O(N) and S.C = O(N) -----------
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> mp;
        int j=0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                ans = max(ans,i-j);
                mp[nums[j]]--;
                if(mp[nums[j]]==0) mp.erase(nums[j]);
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};

int main() {
    return 0;
}