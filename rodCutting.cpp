#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &len,vector<int> &price,int n){
	int t[n+1][n+1];
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= n;j++){
			if(i == 0 || j == 0)t[i][j] = 0;
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(len[i] <= j){
				t[i][j] = max(price[i-1]+t[i][j-len[i-1]],t[i-1][j]);
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[n][n];
}

int main(){
	vector<int> len = {1,2,3,4,5,6,7,8};
	vector<int> price = {1,5,8,9,10,17,17,20};
	int n = 8;
	int ans = solve(len,price,n);
	cout << ans << endl;
	// same as unbounded
}