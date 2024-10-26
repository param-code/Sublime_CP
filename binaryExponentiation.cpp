#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binExpRecur(int a,int b){
	if(b == 0)return 1;
	long res = binExpRecur(a,b/2);
	if(b&1)return (a * res * res);
	return (res * res);
}

int binExpIter(int a,int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans *= a;
		}
		a *= a;
		b >>= 1;
	}
	return ans;
}

int main(){
	// binary exponentiation is used to find the powers
	// cout << pow(2,3) << endl;
	// double d = 1e24;
	// cout << fixed << setprecision(30) << d << endl;
	int a = 2,b = 13;
	// int ans = 1;
	// for(int i = 0;i < b;i++){
	// 	ans *= a;
	// 	ans %= M;
	// }
	// int ans = binExpRecur(a,b);
	int ans = binExpIter(a,b);
	cout << ans << endl;
}