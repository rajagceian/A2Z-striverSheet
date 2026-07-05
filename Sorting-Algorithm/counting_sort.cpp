//Counting Sort is a non-comparison-based sorting algorithm. It is particularly efficient when the range of input values is small compared to the number of elements to be sorted.
// Stable  sort
//-------- T.C = O(n+k) and S.C = O(n+k) --------{k = maximum element value}----------
#include <bits/stdc++.h>
using namespace std;
vector<int> countsort(vector<int>& arr) {
    int n = arr.size();

    // find the maximum element
    int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize cntArr array
    vector<int> cntArr(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        cntArr[arr[i]]++;

    // compute prefix sum
    //-- Why prefix Sum => if prefix[2] = 3,it means array me 3 elements aise hain jo 2 se chhote ya barabar hain.
    for (int i = 1; i <= maxval; i++)
        cntArr[i] += cntArr[i - 1];

    // build output array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[cntArr[arr[i]] - 1] = arr[i];
        cntArr[arr[i]]--;
    }

    return ans;
}