#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x;
	set<long long> shoe;
	for(int i = 0;i < 4;i++){
		cin >> x;
		shoe.insert(x);
	}
	cout << (4-shoe.size()) << endl;
}