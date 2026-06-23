//======== T.C = O(logn) and S.C = O(1)======
class Solution {
public:
    int countDigit(int n) {
        int cnt=0;
        while(n>0){
            cnt++;
            n /= 10;
        }
        return cnt;
    }
};