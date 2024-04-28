#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int num = 0;
		num += s[0] - '0';
		num *= 10 + (s[1] - '0');
		int alt = 'A';
		if(num > 12){
			num -= 12;
			s[0] = '0';
			alt = 'P';
		}
		char c = (char)(num + '0');
		s[1] = c;
		s.push_back(' ');
		s.push_back(alt);
		s.push_back('M');
		cout << s << endl;
	}
}