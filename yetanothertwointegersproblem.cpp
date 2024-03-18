#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int z = abs(a-b);
		if(z % 10 == 0) cout << (z/10) << endl;
		else cout << (z/10 + 1) << endl;
	}
}