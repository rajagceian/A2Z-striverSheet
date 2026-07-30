//Link => https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/
//-------- T.C = O(n^2) and S.C = O(1) ---------------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int currSum = arr[i]+arr[j]+arr[k];
                if(currSum < sum){
                    cnt+= (k-j);
            //with the current j, all indices from j+1 to k are valid as the third element.
                    j++;
                } else{
                    k--;
                }
            }
        }
        return cnt;
    }
};
int main() {

    return 0;
}