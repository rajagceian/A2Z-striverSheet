//Link => https://www.geeksforgeeks.org/problems/radix-sort
//=== Sort w.r.t digit place (i.e, ones,tens,hundreds....)
//------------- T.C = O(d × (n + 10)) ≈ O(dn) and S.C = O(n + 10) = O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void f(vector <int> &arr,int exp){
        int n = arr.size();
        vector <vector <int>> mp(10);
        for(int i=0;i<n;i++){
            mp[(arr[i]/exp)%10].push_back(arr[i]);
        }
        int idx = 0;
        for(int i=0;i<10;i++){
            if(mp[i].size()){
                int j = 0;
                while(j<mp[i].size()){
                    arr[idx++] = mp[i][j++];
                }
            }
        }
    }
    void radixSort(vector<int>& arr) {
        // code here
        int maxi = *max_element(arr.begin(),arr.end());
        for(int exp=1;(maxi/exp)>0;exp *= 10){
            f(arr,exp);
        }
    }
};