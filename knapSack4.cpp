#include <bits/stdc++.h>
using namespace std;

int t[101][101];

int solve(vector<int> &wt,vector<int> &val,int capacity,int size){
	if(capacity == 0 || size == 0)return 0;
	if(t[capacity][size] != -1)return t[capacity][size];
	if(wt[size-1] > capacity)return t[capacity][size] = solve(wt,val,capacity,size-1);
	else if(wt[size-1] <= capacity)return t[capacity][size] = max(val[size-1]+solve(wt,val,capacity-wt[size-1],size-1),solve(wt,val,capacity,size-1));
}

int iterative(vector<int> &wt,vector<int> &val,int capacity,int size){
	int dp[capacity+1][size+1];
	for(int i = 0;i < capacity+1;i++){
		for(int j = 0;j < size+1;j++){
			if(i == 0 || j == 0)dp[i][j] = 0;
		}
	}
	for(int i = 1;i < capacity+1;i++){
		for(int j = 1;j < size+1;j++){
			if(wt[j-1] <= i)dp[i][j] = max(val[j-1]+dp[i-wt[j-1]][j-1],dp[i][j-1]);
			else if(wt[j-1] > i)dp[i][j] = dp[i][j-1];
		}
	}
	return dp[capacity][size];
}

int main(){
	vector<int> wt = {1,3,4,5};
	vector<int> val = {1,4,5,7};
	int capacity = 7;
	int size = wt.size();
	memset(t,-1,sizeof(t));
	int max_profit = solve(wt,val,capacity,size);
	int maxi = iterative(wt,val,capacity,size);
	cout << max_profit << endl;
	cout << maxi << endl;
}