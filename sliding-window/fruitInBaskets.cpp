//Link = > https://leetcode.com/problems/fruit-into-baskets/description/
#include <bits/stdc++.h>
using namespace std;
//--------- T.C = O(n) and S.C = O(1) ---------
int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    int k = 2; // no. of bucket
    vector <int> freq(n+1); // n-types of fruits
    int len = 0;
    int win = 0;
    int j=0;
    for(int i=0;i<n;i++){
        if(freq[fruits[i]]==0){
            win++;
        }
        while(win>k){
            freq[fruits[j]]--;
            if(freq[fruits[j]]==0) win--;
            j++;
        }
        if(win==k){
            len =max(len,i-j+1);
        }
        freq[fruits[i]]++;
        
    }
    return len==0 ? n : len; // len == 0; i.e, types of fruits are available is less than 2, So those all(n) can be filled in one bucket
}

int main() {
    return 0;
}