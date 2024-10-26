#include <bits/stdc++.h>
using namespace std;

int t[101][101];

int solve(vector<int> &wt,vector<int> &val,int capacity,int size){
	if(capacity == 0 || size == 0)return 0;
	if(t[capacity][size] != -1)return t[capacity][size];
	if(wt[size-1] > capacity)return t[capacity][size] = solve(wt,val,capacity,size-1);
	else if(wt[size-1] <= capacity)return t[capacity][size] = max(val[size-1]+solve(wt,val,capacity-wt[size-1],size-1),solve(wt,val,capacity,size-1));
	return 0;
}

int main(){
	vector<int> wt = {1,3,4,5};
	vector<int> val = {1,4,5,7};
	int capacity = 7;
	int size = wt.size();
	memset(t,-1,sizeof(t));
	int max_profit = solve(wt,val,capacity,size);
	cout << max_profit << endl;
}