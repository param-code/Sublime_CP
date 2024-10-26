#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int sum){
	int t[v.size()+1][sum+1];
	int size = v.size();
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
	vector<int> s;
	for(int i = 0;i <= sum/2;i++){
		if(t[size][i]){
			s.push_back(i);
		}
	}
	int ans = INT_MAX;
	for(int i = 0;i < s.size();i++){
		ans = min(ans,sum-(2*s[i]));
	}
	return ans;
}

int main(){
	vector<int> arr = {1,6,11,5};
	int sum = 0;
	for(auto x:arr)sum += x;
	int minSum = solve(arr,sum);
	cout << minSum << endl;
}