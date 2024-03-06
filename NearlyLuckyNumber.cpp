#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int lucky = 0;
	while(n > 0){
		int digit = n % 10;
		if (digit == 7 || digit == 4) lucky++;
		n /= 10;
	}
	if (lucky == 7 || lucky == 4) cout << "YES";else cout << "NO";
}