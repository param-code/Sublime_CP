#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int sum){
	int t[v.size()+1][sum+1];
	for(int i = 0;i <= v.size();i++){
		for(int j = 0;j <= sum;j++){
			if(i == 0 || j == 0)t[i][j] = 0;
		}
	}
	for(int i = 1;i <= v.size();i++){
		for(int j = 1;j <= sum;j++){
			if(v[i-1] <= j)t[i][j] = max(t[i][j-v[i-1]],t[i-1][j]);
			else t[i][j] = t[i-1][j];
		}
	}
	return t[v.size()][sum];
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n,0);
	for(int i = 0;i < n;i++)cin >> v[i];
	int sum;
	cin >> sum;
	int ans = solve(v,sum);
	cout << ans << endl;
}