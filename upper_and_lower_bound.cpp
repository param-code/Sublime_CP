#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v,int to_find){
	int lo = 0,high = v.size()-1,mid;
	while(high-lo > 1){
		mid = (high+lo) / 2;
		if(v[mid] < to_find)lo = mid+1;
		else high = mid;
	}
	if(v[lo] >= to_find)return lo;
	else if(v[high] >= to_find)return high;
	return -1;
}
int upper_bound(vector<int> &v,int to_find){
	int lo = 0,high = v.size()-1,mid;
	while(high-lo > 1){
		mid = (high+lo) / 2;
		if(v[mid] <= to_find)lo = mid+1;
		else high = mid;
	}
	if(v[lo] > to_find)return lo;
	if(v[high] > to_find)return high;
	return -1;
}
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v)cin >> x;
	int to_find;
	cin >> to_find;
	cout << lower_bound(v,to_find) << endl;
}