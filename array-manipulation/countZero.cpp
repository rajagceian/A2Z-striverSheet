//Link =>https://www.geeksforgeeks.org/problems/count-the-zeros2550
//-----------Binary Search => T.C = O(logn) and S.C = O(1) --------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector <int> ans;
        for(int len = 2; len <= 9; len++) {
            for(int start = 1; start + len - 1 <= 9; start++) {
                int num = 0;
                for(int d = start;d<start+len;d++){
                    num = 10*num + d;
                }
                if(low<=num and num<=high){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};
int main() {

    return 0;
}