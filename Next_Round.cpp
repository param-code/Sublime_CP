#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a,t;
	cin >> n;
	cin >> k;
	t = 0;
	vector <int> v;
	for (int i = 0;i < n;i++){
		cin >> a;
		v.push_back(a);
		}
	for (int i = 0;i < n;i++){
		if (v[i] >= v[k-1] && v[i] != 0){
			t++;
		}
	}
	cout << t;
}