//Link =>https://leetcode.com/problems/missing-number
//--------- T.C = O(n) and S.C = O(1)-------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // find sum of nums
        long long actualSum = 0;
        for(int x : nums) actualSum += (long long)x;

        //find sum of first n Natural number 
        long long sum = n*(n+1)/2;
        return sum-actualSum;
    }
};
int main() {

    return 0;
}