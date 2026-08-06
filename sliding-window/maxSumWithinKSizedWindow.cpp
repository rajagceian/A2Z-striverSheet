//Link = > https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;
//--------- T.C = O(n) and S.C = O(1) ----------
int maxSubarraySum(vector<int>& arr, int k) {
    // code here
    int n=arr.size();
    int curr = 0;
    for(int i=0;i<k;i++) curr += arr[i];
    int ans = curr;
    for(int i=0;i<(n-k);i++){
        curr = curr-arr[i]+arr[i+k];
        ans = max(ans,curr);
    }
    return ans;
}

int main() {
    return 0;
}