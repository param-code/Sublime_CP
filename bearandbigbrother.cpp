#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int x = 0;
	while (a < b || a == b){
		a = 3 * a;
		b = 2 * b;
		x++;
	}
	cout << x;
}