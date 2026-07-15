//Link => https://leetcode.com/problems/squares-of-a-sorted-array

//-------- T.C = O(n) and S.C = O(n) -------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n);
        int i=0,j=n-1;
        int idx=j;
        while(i<j){
            int iSq = nums[i]*nums[i];
            int jSq = nums[j]*nums[j];
            if(iSq > jSq){
                ans[idx--]=iSq;
                i++;
            } else{
                ans[idx--]=jSq;
                j--;
            }
        }
        ans[0] = nums[i]*nums[i];
        return ans;
    }
};
int main() {

    return 0;
}