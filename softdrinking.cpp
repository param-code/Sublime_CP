#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int totaldrink = (k*l)/nl;
	int totallime = c*d;
	int totalsalt = p/np;
	int min = totaldrink;
	if(totallime < min) min = totallime;
	if(totalsalt < min) min = totalsalt;
	cout << (min/n) << endl;
}