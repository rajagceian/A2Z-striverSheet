//Link  =>
//========== Approach : 1 => Finding Breaking point : T.C = O(n) and S.C = O(1) ===
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n-1 && nums[i]<=nums[i+1]){
            i++;
        }
        if(i==n-1) return true;
        for(int j=i+1;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                return false;
            }
        }
        if(nums[0] < nums[n-1]) return false;
        return true;
    }
};

//========== Approach : 2 => Count breaking point : T.C = O(n) and S.C = O(1) =====
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 1;i<n;i++){
            if(nums[i-1] > nums[i]) cnt++;
        }
        if(nums[n-1] > nums[0]) cnt++;

        if(cnt <=1) return true;
        return false;
    }
};