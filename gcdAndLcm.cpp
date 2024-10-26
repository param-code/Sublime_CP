#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	// if(a%b == 0)return b;
	if(b==0)return a;
	return gcd(b,a%b);
}

int main(){
	cout << gcd(4,12) << endl;
	cout << gcd(12,18) << endl;
	cout << 12 * 18 / gcd(12,18) << endl; // lcm as hcf * lcm = a * b

	// minimum fraction -> a/b => a/gcd(a,b)/b/gcd(a,b)
}