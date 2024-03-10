#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	string s,a;
	cin >> n >> t;
	cin >> s;
	a = s;
	for(int i = 0;i < t;i++){
		for(int j = 0;j < n;j++){
			if (a[j] == 'B' && a[j+1] == 'G'){
				swap(a[j],a[j+1]);
				j++;
			}
		}
	}
	cout << a << endl;
}