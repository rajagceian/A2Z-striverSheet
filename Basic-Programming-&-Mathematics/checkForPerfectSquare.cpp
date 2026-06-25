//Link => https://leetcode.com/problems/valid-perfect-square
//======= T.C = O(logn) and S.C = O(1) ==========
class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = sqrt(num);
        return n*n == num;
    }
};