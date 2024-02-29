#include <bits/stdc++.h>
using namespace std;
int main(){
	// n - number of problems , o is sum of agreement of all 3 of them i.e. Petya,Vasya and Tonya , T - Total no of agreement of problems they are gonna solve , d - Choice of agreement i.e. YES or NO
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