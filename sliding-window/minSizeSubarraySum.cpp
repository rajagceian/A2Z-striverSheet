//link => https://leetcode.com/problems/minimum-size-subarray-sum/
#include <bits/stdc++.h>
using namespace std;

//----------T.c = O(n) and S.C = O(1) -----------

int minSubArrayLen(int target, vector<int>& nums) {
    int n= nums.size();
    int cnt = INT_MAX;
    int j=0,sum=0;
    for(int i=0;i<n;i++){
        sum += nums[i];
        while(sum>target){
            cnt=min(cnt,i-j+1); // sum greater than target
            sum -= nums[j++];
        }
        if(sum==target) cnt=min(cnt,i-j+1); // sum is equal to target
    }
    return cnt==INT_MAX ? 0 : cnt;
}

int main() {
    return 0;
}