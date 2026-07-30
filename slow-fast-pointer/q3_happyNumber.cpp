//Link =>

#include <bits/stdc++.h>
using namespace std;

//--------- M-1 : Hashmap => T.C = O(1) and Space = O(n)------
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set <int> seen;
        while(n!=1){
            int next = digitSum(n);
            if(seen.count(next)) return false;
            n = next;
            seen.insert(next);
        }
        return true;
    }
};

//--------- M-2 : Slow-fast => T.C = O(1) and Space = O(1)------
class Solution1 {
public:
    int digitSum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n<1) return false;
        int slow = n;
        int fast = digitSum(n);
        while(slow!=fast){
            if(slow==1 || fast == 1) return true;
            slow = digitSum(slow);
            fast = digitSum(digitSum(fast));
        }
        if(slow==1 || fast == 1) return true;
        return false;
    }
};

int main() {

    return 0;
}