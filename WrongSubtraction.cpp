#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	int k;
	cin >> n >> k;
	for(int i = 0;i < k;i++){
		int digit = n % 10;
		if (digit == 0) n /= 10;
		else (n--);
	}
	cout << n;
}