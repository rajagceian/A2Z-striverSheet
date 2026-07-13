//Link =>
//-------- T.C = O(n) and S.C = O(1) --------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            } else{
                ans = max(ans,cnt);
                cnt=0;
            }
        }
        ans = max(ans,cnt);
        return ans;
    }
};
int main() {

    return 0;
}