//Link => https://leetcode.com/problems/4sum/
//------------- T.C = O(n^3) and S.C = O(1) -------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<4) return {};
        if(target==0 && nums[0]>0) return {};
        vector <vector <int>> ans;
        for(int l=0;l<n-3;l++){
           if (l > 0 && nums[l] == nums[l-1]) {
                continue;
            }
        for(int i=l+1;i<n-2;i++){
           if (i > (l+1) && nums[i] == nums[i-1]) {
                continue;
            }
            int j=i+1,k=n-1;
            while(j<k){
                long long sum = (long long)((long long)nums[l]+(long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
              //  cout<<sum<<endl;
                if(sum<target) j++;
                else if(sum>target) k--;
                else{ // sum==0
                    ans.push_back({nums[l],nums[i],nums[j],nums[k]});
                    j++,k--;
                    //-- skip same element to avoid duplication
                  //  while(j<k and nums[j]==nums[j-1]) j++; //--- i handle this above.
                    while(j<k and nums[k]==nums[k+1]) k--;
                }
            }
        }
        }
        return ans;
    }
};
int main() {

    return 0;
}