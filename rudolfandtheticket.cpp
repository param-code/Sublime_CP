#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int m,n,k,b,c;
		vector<int> x;
		vector<int> y;
		int ans = 0;
		cin >> n >> m >> k;
		for(int i = 0;i < n;i++){
			cin >> b;
			x.push_back(b);
		}
		for(int i = 0;i < m;i++){
			cin >> c;
			y.push_back(c);
		}
		for(int i = 0;i < x.size();i++){
			for(int j = 0;j < y.size();j++){
				if(x[i] + y[j] <= k) ans++;
			}
		}
	cout << ans << endl;
	}
}