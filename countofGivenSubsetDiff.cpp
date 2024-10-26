#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int sum){
	int t[v.size()+1][sum+1];
	for(int i = 0;i <= v.size();i++){
		for(int j = 0;j <= sum;j++){
			if(i == 0)t[i][j] = 0;
			if(j == 0)t[i][j] = 1;
		}
	}
	for(int i = 1;i <= v.size();i++){
		for(int j = 1;j <= sum;j++){
			if(v[i-1] <= j){
				t[i][j] = t[i-1][j-v[i-1]] + t[i-1][j];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[v.size()][sum];
}

int main(){
	vector<int> arr = {1,1,2,3};
	int diff = 1;
	int sum = 0;
	for(auto x:arr)sum += x;
	int s1 = (diff+sum) / 2;
	int count = solve(arr,s1);
	cout << count << endl;
}