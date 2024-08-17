#include <bits/stdc++.h>
using namespace std;
int digitSum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int origin(int n){
    int sum = digitSum(n);
    while(sum > 10){
        sum = digitSum(sum);
    }
    return sum;
}
int64_t solve(int n){
    int64_t sum = 0;
    for(int64_t i = 1;i <= n;i++){
        if(i < 10)sum += i;
        else sum += origin(i);
    }
    return sum;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int64_t n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
