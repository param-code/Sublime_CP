#include <bits/stdc++.h>
using namespace std;
int main(){
	int w;
	cin >> w;
	if (w == 2){
		cout << "NO" << endl;
	}
	if (w >= 1 && w != 2 && w <= 100){
	if (w % 2 == 0){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
}