//========= T.C = O(sqrt(n)) and S.C = O(sqrt(n)) =============
class Solution {
public:
    vector<int> getDivisors(int n) {
        vector<int> small, large;
        //A divisor always comes in pairs: i x (n/i) = n
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                small.push_back(i);

                if(i != n / i)
                    large.push_back(n / i);
            }
        }

        reverse(large.begin(), large.end());

        small.insert(small.end(), large.begin(), large.end());

        return small;
    }
};