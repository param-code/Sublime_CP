#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,x;
	cin >> n;
	x = 0;
	for(int i = 0;i < n;i++){
		cin >> p >> q;
		int space = q - p;
		if (space >= 2) x++;
	}
	cout << x;
}