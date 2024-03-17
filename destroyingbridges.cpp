#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int bridges = (n *(n-1))/2;
		int rem = bridges - k;
		cout << rem+1 << endl;
	}
}