#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	int ans = x/10;
	if(x > 0) ans++;
	cout << abs(ans) << endl;
}