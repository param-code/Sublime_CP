#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int main(){
	int n;
	cin >> n;
	int arr[n];
	cin >> arr[0];
	int high = arr[0];
	int low = arr[0];
	int ans = 0;
	for(int i = 1;i < n;i++){
		cin >> arr[i];
		if(arr[i] > high){
			ans++;
			high = arr[i];
		}else if(arr[i] < low){
			ans++;
			low = arr[i];
		}
	}
	cout << ans << endl;
}