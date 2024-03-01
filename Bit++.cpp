#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,x;
	cin >> n;
	x = 0;
	string a;
	for (int i=0;i < n;i++){
		cin >> a;
		if (a[1] == '+'){
			x++;
		}
		else x--;
	}
	cout << x << endl;
}