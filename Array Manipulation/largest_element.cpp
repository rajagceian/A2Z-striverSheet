//link =>https://www.geeksforgeeks.org/problems/largest-element-in-array4009
//---------- T.C = O(n) and S.C = O(1)------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        for(int ele : arr){
            maxi = max(maxi,ele);
        }
        return maxi;
    }
};
