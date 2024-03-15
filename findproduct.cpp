#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int temp[t];
	long long int answer = 1;
	long modulo = 1e9 + 7;
	for(int i = 0;i < t;i++){
		int x;
		cin >> x;
		temp[i] = x;
		answer *= x % modulo;
	}
	cout << answer << endl;
}