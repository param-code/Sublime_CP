#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n < 26){
		cout << "NO" << endl;
		return 0;
	}
	set<char> check;
	string s;
	cin >> s;
	for(int i = 0;i < n;i++){
		s[i] = tolower(s[i]);
		check.insert(s[i]);
	}
	if(check.size() < 26) cout << "NO" << endl;
	else cout << "YES" << endl;

}