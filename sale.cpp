#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int avail[n];
	for(int i = 0;i < n;i++)cin >> avail[i];
	sort(avail,avail+n);
	int ans = 0;
	for(int i = 0;i < m;i++){
		if(avail[i] < 0)ans += abs(avail[i]);
	}
	cout << ans << endl;
}