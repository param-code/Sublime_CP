#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin >> n;
	vector<int> x(n,0);
	for(int i = 1;i <= n;i++){
		cin >> p;
		x[p-1] = i;
	}
	for(int a:x) cout << a << " ";
}