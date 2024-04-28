#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i = 2;i <= n/2;i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for(int i = 4;i < n;i++){
		bool lever = false;
		for(int j = n;j >= 4;j--){
			if(!prime(i) && !prime(j) && (i + j) == n){
				cout << i << " " << j << endl;
				lever = true;
				break;
			}
		}
		if(lever) break;
	} // Time Limit Exceeded in this solution
}