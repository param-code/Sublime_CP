#include <bits/stdc++.h>
using namespace std;
const int modulo = 1e9+7;
int main(){
	long long n;
	cin >> n;
	int count = 0;
	if(n % 2) cout << 0 << endl;
	else {for(int i = 1;i <= (n/2)/2;i++){
		int x = i;
		int y = (n/2)-x;
		if(y <= 0 || x==y) continue;
		else count++;
	}
	cout << count << endl;
}
}