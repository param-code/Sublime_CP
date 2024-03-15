#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n;
	int total = 0;
	for(int i = 0;i < n;i++){
		cin >> s;
		if(s[0] == 'T') total += 4;
		if(s[0] == 'C') total += 6;
		if(s[0] == 'O') total += 8;
		if(s[0] == 'D') total += 12;
		if(s[0] == 'I') total += 20;
	}
	cout << total << endl;
}