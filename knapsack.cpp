#include <bits/stdc++.h>
using namespace std;
int knapsack(vector<int> w,vector<int> val,int capacity,int size){
	if(capacity == 0 || size == 0)return 0;
	if(w[size-1] <= capacity){
		return max(val[size-1] + knapsack(w,val,capacity - val[size-1],size-1),knapsack(w,val,capacity,size-1));
	}
	else if(w[size-1] > capacity)return knapsack(w,val,capacity,size-1);
}
int main(){
	vector<int> w = {1,3,5,7};
	vector<int> val = {2,3,4,6};
	int cap = 10;
	cout << knapsack(w,val,cap,w.size()) << endl;
}