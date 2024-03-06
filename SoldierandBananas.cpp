#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long k, w;
	cin >> k >> n >> w;
	long long price = k;
	for (int i = 2;i <= w;i++){
		price += (i*k);
	}
	if (price <= n) cout << 0;
	else {cout << (price - n);}
}