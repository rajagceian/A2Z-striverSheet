//Link => https://leetcode.com/problems/count-of-smaller-numbers-after-self/

// ============Approach - 1(Merge Sort) === T.C = O(nlogn) and S.C = O(n) ============
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<pair<int,int>>& arr,int l,int mid,int h,vector<int>& cnt){
        vector <pair <int,int>> temp(h-l+1);
        int i = l;
        int j = mid + 1;
        int idx = 0;
        while(i<=mid && j<=h){
            if(arr[i].first <= arr[j].first){
                cnt[arr[i].second] += (j-(mid+1)); //(j-(mid+1)) => How many elements from the right half have already been placed into the merged array before the current left element
                temp[idx++] = arr[i++];
            } else{ 
                temp[idx++] = arr[j++];
            }
        }
        while(i<=mid){
            cnt[arr[i].second] += (j-(mid+1));
            temp[idx++] = arr[i++];
        }
        while(j<=h){
            temp[idx++] = arr[j++];
        }
        for(int k=l;k<=h;k++){
            arr[k] = temp[k-l];
        }
    }
    void mergeSort(vector<pair<int,int>>& arr,int l,int h,vector<int>& cnt){
        if(l>=h) return;
        int mid = l + (h-l)/2;
        mergeSort(arr,l,mid,cnt);
        mergeSort(arr,mid+1,h,cnt);
        merge(arr,l,mid,h,cnt);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector <pair <int,int>> arr;
        for(int i=0;i<n;i++) arr.push_back({nums[i],i});
        vector <int> cnt(n);
        mergeSort(arr,0,n-1,cnt);
        return cnt;
    }
};

//==================== Approach - 2 === Binary Search =================
//=================== T.C = O(nlogn) and S.C = O(n) ================
class Solution1 {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector <int> sorted;
        vector <int> count;
        for(int i=n-1;i>=0;i--){
            auto pos = lower_bound(sorted.begin(),sorted.end(),nums[i]); // lower_bound => first element's place which is equal to or greater than target element(Here, nums[i])
            int cnt = pos - sorted.begin();
            count.push_back(cnt);
            sorted.insert(pos,nums[i]);
        }
        reverse(count.begin(),count.end());
        return count;
    }
};