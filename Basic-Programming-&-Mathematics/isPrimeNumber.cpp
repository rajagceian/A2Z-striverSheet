//========= T.C = O(sqrt(n)) and S.C = O(1)===============
class Solution {
  public:
    bool isPrime(int num){ 
        if(num<2) return false;
        for(int i=2;i<=sqrt(num);i++){ 
            if(num%i==0) return false; 
        } 
    return true; 
    }
};