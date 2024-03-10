#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cap = 0;
	int a,b,stay;
	stay = 0;
	for (int i = 0;i < n;i++){
		cin >> a >> b;
		stay -= a;
		stay += b;
		if (stay > cap) cap = stay;
	}
	cout << cap << endl;
}