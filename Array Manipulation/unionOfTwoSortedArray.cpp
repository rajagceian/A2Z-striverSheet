//Link => https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/
//-------------- T.C = O(m+n) and S.C = O(n)-----------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int removeDupEle(vector <int> &a){
        int n = a.size();
        int prev=a[0];
        int cnt=1;
        int idx=1;
        for(int i=1;i<n;i++){
            if(prev!=a[i]){
                prev=a[i];
                a[idx++]=a[i];
                cnt++;
            }
        }
        return cnt;
    }
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector <int> ans;
        int cnt1 = removeDupEle(a);
        int cnt2 = removeDupEle(b);
        int i=0,j=0;
        while(i<cnt1 && j<cnt2){
            if(a[i] < b[j]){
                ans.push_back(a[i++]);
            }
            else if(a[i] > b[j]){
                ans.push_back(b[j++]);
            }
            else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<cnt1) ans.push_back(a[i++]);
        while(j<cnt2) ans.push_back(b[j++]);
        return ans;
    }
};
int main() {

    return 0;
}