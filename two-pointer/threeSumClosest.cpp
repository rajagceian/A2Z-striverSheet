//Link =>
//-------- T.C = O(n^2) and S.C=O(1)---------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3) return {};
        int sumRes = 0;
        int diff = INT_MAX;
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                int d = abs(sum-target);
                if(diff>d){
                    diff = d;
                    sumRes = sum;
                }
                if(sum<target) j++;
                else if(sum>target) k--;
                else{ // sum==0
                    return sumRes;
                }
            }
        } 
        return sumRes;
    }
};
int main() {

    return 0;
}