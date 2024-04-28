#include <bits/stdc++.h>
using namespace std;
int dp[5][5];
memset(dp,-1,sizeof(dp));
int knapsack(vector<int> w,vector<int> v,int capacity,int size){
	if(w == 0 || capacity == 0){
		return 0;
	}
	if(dp[size][capacity] != -1){
		return dp[size][capacity];
	}
	if(w[size-1] <= capacity){
		return dp[size][capacity] = max(v[size-1] + knapsack(w,v,capacity-v[size-1],size-1),knapsack(w,v,capacity,size-1));
	}else if(w[size] > capacity){
		return dp[size][capacity] = knapsack(w,v,capacity,size-1);
	}
}
int main(){
	vector<int> w = {1,2,5,7};
	vector<int> v = {2,3,4,7};
	int cap = 10;
	cout << knapsack(w,v,cap,w.size()) << endl;
}