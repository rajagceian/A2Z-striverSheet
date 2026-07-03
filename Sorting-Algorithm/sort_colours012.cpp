//Link => https://leetcode.com/problems/sort-colors/

//====== Approach - 1 : Counting Method : T.C = O(n) and S.C = O(1)===
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ones=0,twos=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) ones++;
            else if(nums[i]==2) twos++;
        }
        int zeros=n-ones-twos;
        for(int i=0;i<n;i++){
            if(zeros) {
                nums[i]=0;
                zeros--;
            }
            else if(ones) {
                nums[i]=1;
                ones--;
            }
            else nums[i]=2;
        }
    }
};

//=========== Approach - 2 : Dutch National Flag Algorithm = T.C = O(n) and S.C = O(1)==
// ====== 0 -> Left side , 1 -> in middle and 2 -> right side
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high = nums.size()-1;
        int low = 0;
        int mid = 0;

       while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if( nums[mid] == 1){
                mid++;
            }
            else{
                swap( nums[mid], nums[high]);
                high--;
            }
            
        } 
        
    }
};