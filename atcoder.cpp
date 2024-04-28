#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string x = s.substr(3,6);
	int z = stoi(x);
	if(z >= 1 && z <= 349 && z != 316)cout << "Yes" << endl;
	else cout << "No" << endl;
}