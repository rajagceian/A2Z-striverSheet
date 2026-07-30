//Link => https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242

//============ T.C = O(nloglogn) and S.C = O(n) =======
class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector <bool> flag(n+1,true);
        flag[0]=flag[1]=false;
        for(int i=2;i<flag.size();i++){
            if(flag[i]){
                for(int j=2;i*j<=n;j++){
                    flag[i*j]=false;
                }
            }
        }
        vector <int> ans;
        for(int i=0;i<flag.size();i++){
            if(flag[i]) ans.push_back(i);
        }
        return ans;
    }
};