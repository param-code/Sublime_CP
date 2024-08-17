#include <bits/stdc++.h>
using namespace std;
// Upper_bound agar element hoga toh bhi ek aage wala deta hai par lower_bound hoga toh same element deta h pr nhi hoga toh ek aage ka element deta h
int main(){
	int n;
	cin >> n;
	int v[n];
	for(auto &x:v)cin >> x;
	for(auto x:v)cout << x << ' ';
	cout << endl;
	// int *ptr = upper_bound(v,v+n,25);
	// cout << (*ptr) << endl;
	// cout << count(v,v+n,5) << endl;
	// cout << *max_element(v,v+n) << endl;
	int sum = accumulate(v,v+n,0); // accumulate(start,end,initial value of sum);
	cout << sum << endl;
}