#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> w = {1,2,3,7};
	vector<int> v = {2,3,5,7};
	int cap = 7;
	int dp[w.size()+1][v.size()+1];
	for(int i = 0;i < v.size()+1;i++){
		for(int j = 0;j < w.size()+1;j++){
			if(i == 0 || j == 0){
				dp[i][j] = 0;
			}
		}
	}
	for(int i = 1;i < v.size()+1;i++){
		for(int j = 1;j < w.size()+1;j++){
			if(w[i-1] <= j){
				dp[i][j] = max(v[i-1] + dp[i-1][j-w[i-1]],dp[i-1][j]);
			}else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[w.size()][v.size()] << endl;
}