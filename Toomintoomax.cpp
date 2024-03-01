#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin >> t;
	for (int i = 0;i < t;i++){
		cin >> n;
		int arr[n];
		for (int j = 0;j < n;j++){
			cin >> arr[j];
		}
		for (int k=0;k < n;k++){
			if (arr[k] > arr[k+1]){
				x += abs(arr[k] - arr[k+1]);
			}else x += abs(arr[k+1] - arr[k]);
		}
		cout << x << endl;
	}
}