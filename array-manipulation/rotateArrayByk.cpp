//Link => https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;
//--------- M-1 => Brute force => T.C = O(n*k) and S.C = O(1)-----{TLE}---
class Solution1 {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        for (int i = 0; i < k; i++) {
            int last = nums[n - 1];
            for (int j = n - 1; j > 0; j--) {
                nums[j] = nums[j - 1];
            }
            nums[0] = last;
        }
    }
};

//------------- M-2 => Reverse => T.C = O(n) and S.C = O(1)---
class Solution {
public:
    void reverse(vector<int>&nums,int start,int end){
        while(start < end) swap(nums[start++],nums[end--]);
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        //Step-1 : Reverse whole Array
        reverse(nums,0,n-1);

        //Step-2 : Reserve current first k element
        reverse(nums,0,k-1);

        //Step-3 : Reserve rest element
        reverse(nums,k,n-1);
    }
};
//------------ Or ---- Using STL of reverse function ------------
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
int main() {

    return 0;
}