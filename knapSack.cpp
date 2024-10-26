#include <bits/stdc++.h>
using namespace std;

int max_profit = 0;

void solve(vector<int> &wt,vector<int> &val,int capacity,int total_sum,int total_profit,int index){
	if(total_sum > capacity)return;
	if(index == val.size()){
		max_profit = max(total_profit,max_profit);
		return;
	}
	solve(wt,val,capacity,total_sum,total_profit,index+1);
	total_sum += wt[index];
	total_profit += val[index];
	solve(wt,val,capacity,total_sum,total_profit,index+1);
}

int main(){
	vector<int> wt = {1,3,4,5};
	vector<int> val = {1,4,5,7};
	int capacity = 7;
	solve(wt,val,capacity,0,0,0);
	cout << max_profit << endl;
}