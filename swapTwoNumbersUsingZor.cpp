#include <bits/stdc++.h>
using namespace std;
int main(){
	int a = 4,b = 6;
	a = a ^ b;
	b = b ^ a;
	// b ^ (a ^ b) -> b ^ b ^ a , here b ^ b will be zero so b = a
	a = a ^ b; // a ^ (b ^ a) or a ^ a ^ b
	cout << a << ' ' << b << endl;
}