#include <bits/stdc++.h>
using namespace std;

int Sum(vector<int> v){
	int ans = 0;
	for(auto x:v)ans += x;
	return ans;
}

bool solve(vector<int> v){
	if(Sum(v)&1)return false;
	int sum = Sum(v)/2;
	int t[v.size()+1][sum+1];
	for(int i = 0;i <= v.size();i++){
		for(int j = 0;j <= sum;j++){
			if(i == 0)t[i][j] = false;
			if(j == 0)t[i][j] = true;
		}
	}
	for(int i = 1;i <= v.size();i++){
		for(int j = 1;j <= sum;j++){
			if(v[i-1] <= j){
				t[i][j] = t[i-1][j-v[i-1]] || t[i-1][j];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[v.size()][sum];
}

int main(){
	vector<int> arr = {1,5,11,5};
	if(solve(arr))cout << "YES" << endl;
	else cout << "NO" << endl;
}