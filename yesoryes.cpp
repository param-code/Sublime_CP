#include <bits/stdc++.h>
using namespace std;
void lower(string &s){
	for(int i = 0;i < s.length();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = (s[i] - 'A') + 'a';
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		lower(s);
		if(s == "yes") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}