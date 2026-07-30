//Link => https://leetcode.com/problems/container-with-most-water/
//-------- T.C = O(n) and S.C = O(1) ----------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxi = 0;
        int i=0,j=n-1;
        while(i<j){
           int amt = min(height[i],height[j])*(j-i);
           maxi = max(maxi,amt);
           if(height[i]<height[j]) i++;
           else j--;  
        }
        return maxi;
    }
};
int main() {

    return 0;
}