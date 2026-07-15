//Link => https://leetcode.com/problems/3sum
//------- T.C = O(n^2) and S.C = (1) -----------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Test case => {1,1,1,2,2,3,3,3} //Dry run , if confusion
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3 || nums[0]>0) return {};
        vector <vector <int>> ans;
        for(int i=0;i<n;i++){
           if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j=i+1,k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0) j++;
                else if(sum>0) k--;
                else{ // sum==0
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                    //-- skip same element to avoid duplication
                  //  while(j<k and nums[j]==nums[j-1]) j++; //--- i handle this above.
                    while(j<k and nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
int main() {

    return 0;
}