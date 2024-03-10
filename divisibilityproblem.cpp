#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,a,b;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> a >> b;
		int moves = 0;
		if (a % b != 0) moves = (b-(a % b));
		cout << moves << endl;
	}
}