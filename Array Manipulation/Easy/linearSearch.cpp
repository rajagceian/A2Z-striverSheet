//Link => https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621
//----------- T.C = O(n) and S.C = O(1) -------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==x) return i;
        }
        return -1;
    }
};
int main() {

    return 0;
}