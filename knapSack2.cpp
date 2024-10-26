#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &wt,vector<int> &val,int capacity,int size){
	if(size == 0 || capacity == 0)return 0;
	if(wt[size-1] > capacity)return solve(wt,val,capacity,size-1);
	else if(wt[size-1] <= capacity)return max(val[size-1] + solve(wt,val,capacity-wt[size-1],size-1),solve(wt,val,capacity,size-1));
}

int main(){
	vector<int> wt = {1,3,4,5};
	vector<int> val = {1,4,5,7};
	int capacity = 7;
	int size = wt.size();
	int max_profit = solve(wt,val,capacity,size);
	cout << max_profit << endl;
}