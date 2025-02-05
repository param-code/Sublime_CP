#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &coin,int sum){
	int t[coin.size()+1][sum+1];
	for(int i = 0;i < coin.size()+1;i++){
		for(int j = 0;j < sum+1;j++){
			if(i == 0)t[i][j] = 0;
			if(j == 0)t[i][j] = 1;
		}
	}
	for(int i = 1;i <= coin.size();i++){
		for(int j = 1;j <= sum;j++){
			if(coin[i-1] <= j){
				t[i][j] = t[i][j-coin[i-1]] + t[i-1][j];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[coin.size()][sum];
}

int main(){
	vector<int> coin = {1,2,3};
	int sum = 5;
	int ans = solve(coin,sum);
	cout << ans << endl;
}