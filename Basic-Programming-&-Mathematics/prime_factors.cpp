//Link => https://www.geeksforgeeks.org/problems/prime-factor-of-a-number

//========== T.C = O(sqrt(n)) and S.C = O(n) ==========
class Solution {
public:
    vector<int> primeFactors(int n) {
        vector<int> ans;

        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                ans.push_back(i);
                n/=i;
            }
        }

        if(n>1) // Prime Number itself
            ans.push_back(n);

        return ans;
    }
};