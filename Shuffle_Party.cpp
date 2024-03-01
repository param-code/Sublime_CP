#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	int n;
	cin >> t;
	int a[n];
	long long l = 1;
	for (int i = 0;i < t;i++){
		cin >> n;
		for (int j = 0;j < n;j++){
			a[j] = j;
		}
		for (int k = 1;k <= n;k++){
			for (int l = 1;l <= n;l++){
				if (k % l == 0){
					l = k;
				}
			}
			swap(a[l],a[k]);
		}
	}
	for (int s = 0;s < n;s++){
		if (a[s] == 1){
		cout << a[s];
		}
	}
}