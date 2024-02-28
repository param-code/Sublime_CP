#include <bits/stdc++.h>
using namespace std;
int main(){
	int n , o , t , d;
	cin >> n;
	t = 0;
	for (int i = 0;i < n;i++){
		o = 0;
		for (int j = 0;j < 3;j++){
			cin >> d;
			o += d;
		}
		if (o > 1){
			t += 1;
		}
	}
	cout << t;
}