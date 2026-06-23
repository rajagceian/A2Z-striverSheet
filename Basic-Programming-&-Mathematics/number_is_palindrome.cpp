//====== T.C = O(logn) and S.C = O(1)====
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int check=x;
        long long revX=0;
        while(x){
            int r=x%10;
            revX=revX*10 + r;
            x/=10;
        }
        if(check==revX) return true;
        else return false;
    }
};