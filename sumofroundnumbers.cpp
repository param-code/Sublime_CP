#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> temp;
		int n,x=1;
		cin >> n;
		while(n){
			x *= 10;
			int digit = n % x;
			if(digit)temp.push_back(digit);
			n -= digit;
		}
		cout << temp.size() << endl;
		for(auto x:temp){
			cout << x << " ";
		}
		cout << endl;
	}
}