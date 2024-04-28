#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	ll arr[n];
	cin >> arr[0];
	ll max = arr[0];
	for(ll i = 1;i < n;i++){
		cin >> arr[i];
		if(arr[i] > max) max = arr[i];
	}
	long long ans = 0;
	for(ll i = 0;i < n;i++){
		if(arr[i] < max) ans += max - arr[i] + 0LL;
	}
	cout << ans << endl;
}