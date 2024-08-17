#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> demand(n);
	vector<int> avail(m);
	for(auto &x:demand)cin >> x;
	for(auto &x:avail)cin >> x;
	int i = 0,j = 0;
	sort(begin(demand),end(demand));
	sort(begin(avail),end(avail));
	int ans = 0;
	while(i < m && j < n){
		if(avail[i] >= demand[j]-k && avail[i] <= demand[j]+k){
			ans++;
			i++;
			j++;
		}else if(avail[i] < demand[j]+k)i++;
		else j++;
	}
	cout << ans << endl;
}