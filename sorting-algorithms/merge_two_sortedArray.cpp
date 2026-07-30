//Link => https://leetcode.com/problems/merge-sorted-array

//=========== Approach - 1 === Using extra space (S.C = O(m) and T.C = O(m+n)) ====
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> temp;
        for(int i=0;i<m;i++) temp.push_back(nums1[i]);
        int i=0,j=0,idx=0;
        while(i<m && j<n){
            if(temp[i]<nums2[j]){
                nums1[idx++]=temp[i++];
            } else{
                nums1[idx++]=nums2[j++];
            }
        }
        while(i<m){
            nums1[idx++]=temp[i++];
        }
        while(j<n){
            nums1[idx++]=nums2[j++];
        }
    }
};

//=========== Approach - 1 === Without extra space (S.C = O(1) and T.C = O(m+n)) ====
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,idx=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[idx--]=nums1[i--];
            } else{
                nums1[idx--]=nums2[j--];
            }
        }

        while(j>=0){
            nums1[idx--]=nums2[j--];
        }
    }
};
