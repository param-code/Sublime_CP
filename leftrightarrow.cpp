#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int x = 0;
	if(s[0] != '<') x++;
	if(s[s.length()-1] != '>') x++;
	for(int i = 1;i < s.length()-1;i++){
		if(s[i] != '='){
			x++;
			break;
		}
	}
	if(x == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}