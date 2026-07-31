//Link => https://leetcode.com/problems/find-the-duplicate-number

#include <bits/stdc++.h>
using namespace std;
//--------- M-01 ------- Hashing : T.C = O(n) and S.C = O(n) ---
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int ele : nums){
            if(mp.count(ele)){
                return ele;
            } else{
                mp[ele]++;
            }
        }
        return -1;
    }
};

//----- M-02 ---- Negative Marking : O(n) and S.C = O(1) -------
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int idx = abs(nums[i])-1;
            if(nums[idx]<0){
                return idx+1;
            } else{
                nums[idx] *=-1;
            }
        }
        return -1;
    }
};

//-----Optimal ----- M-03 : Tortoise Hare Algo : Slow and Fast pointer
// -------- T.C = O(n) and S.C = O(1) --- In place
class Solution {
public:
    // Tortoise Hare Algo -  Slow and Fast pointer
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //--- Given -> range = [1,n] and duplicate is present

        //--- to meet 
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        // --- to find meeting number
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
int main() {

    return 0;
}