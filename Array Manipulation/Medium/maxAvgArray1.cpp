//Link =>https://leetcode.com/problems/maximum-average-subarray-i/description
//---------- T.C = O(n) and S.C = O(1)----------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i] += nums[i-1];
        }
        double ans = -1e8;
        for(int i=k-1;i<n;i++){
            if(i-k >=0){
                double sum = (nums[i]-nums[i-k])*1.0;
                ans = max(ans,sum/(k*1.0));
            }else{
                ans = max(ans,nums[i]/(k*1.0)); 
            }
        }
        return ans;
    }
};
int main() {

    return 0;
}