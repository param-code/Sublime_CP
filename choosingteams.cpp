#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	int ans = 0;
	for(int i = 0;i < n;i++) cin >> arr[i];
	sort(arr,arr+n);
	for(int i = 0;i < n;i++){
		if(arr[i] > 5-k) break;
		ans++;
	}
	cout << ans/3 << endl;
}