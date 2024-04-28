#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		int ans = 0;
		ans += a;
		int sum = b+c;
		ans += (sum / 3);
		if(sum % 3 == 1 || sum % 3 == 2) sum++;
		if((sum % 3 != 0);
		cout << ans << endl;		
	}
}