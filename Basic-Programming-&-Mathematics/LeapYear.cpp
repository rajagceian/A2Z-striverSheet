//=========T.C = O(1) and S.C = O(1) ======
class Solution {
  public:
    bool checkYear(int n) {
        if(n%100==0) return n%400==0;
        return n%4==0;
    }
};