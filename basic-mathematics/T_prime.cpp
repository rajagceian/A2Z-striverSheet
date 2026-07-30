//link => https://codeforces.com/problemset/problem/230/B
//Link => https://www.hackerearth.com/problem/algorithm/t-primes-c8a95cda-addb30e0

//======= T.C = O(n x sqrt(x)) and S.C = O(N) ==========
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool partialPrime(long long n){
    for(long long i=2;i*i<n;i++){ // Here i*i < n because We have to find T-prime
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector <long long> arr;
    while(n--){
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    for(long long x : arr){
        long long sq = sqrt(x);
        if(x==1) cout<<"NO"<<endl;
        else if(sq*sq == x){
            if(partialPrime(x))
             cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}