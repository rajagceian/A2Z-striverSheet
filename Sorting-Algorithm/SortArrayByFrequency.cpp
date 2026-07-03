//Link => https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

//=============== T.C = O(nlogn) and S.C = O(n) ===============
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mp;
        for(int ele : nums) mp[ele]++;
        sort(nums.begin(),nums.end(),[&mp](int a,int b){
            if(mp[a]==mp[b]) return a>b;
            return mp[a]<mp[b];
        });
        return nums;
    }
};