//Link => https://leetcode.com/problems/intersection-of-two-arrays

//----------- T.C = O(n) and S.C = O(n) ------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> st;
        for(int x : nums1) st.insert(x);
        vector <int> ans;
        for(int x : nums2){
            if(st.count(x)){
                ans.push_back(x);
                st.erase(x);
            }
        }
        return ans;
    }
};
int main() {

    return 0;
}