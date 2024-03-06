#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int up = 0;
	int lo = 0;
	for(int i = 0;i < s.length();i++){
		int x = s[i];
		if (isupper(x)) up++;
		if (islower(x)) lo++;
	}
	for(int j = 0;j < s.length();j++){
		if(up > lo){
			s[j] = toupper(s[j]);
		}
		else {
			s[j] = tolower(s[j]);
		}
	}
	cout << s << endl;
}