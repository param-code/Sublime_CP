#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin >> n >> m >> k;
	priority_queue<int> demand;
	priority_queue<int> avail;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		demand.push(x);
	}
	for(int i = 0;i < m;i++){
		int x;
		cin >> x;
		avail.push(x);
	}
	int ans = 0;
	while(!demand.empty() && !avail.empty()){
		if(avail.top() >= demand.top() - k && avail.top() <= demand.top() + k){
			ans++;
			avail.pop();
			demand.pop();
		}
		if(avail.top() > demand.top()+k)avail.pop();
		if(avail.top() < demand.top()-k)demand.pop();
	}
	cout << ans << endl;
}