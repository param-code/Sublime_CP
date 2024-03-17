#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0;i < n;i++){
			int a;
			cin >> a;
			if(i == 0) arr[0] = a;
			if(a == 1){
				arr[i+1] = arr[i] + 1;
			}else if(a == 2){
				arr[i+1] = arr[i] - 1;
			}else if(a == 0){
				arr[i+1] = arr[i];
			}
		}
		for(int i = 0;i < n;i++){
			cout << arr[i] << " ";
		}
	}	
}