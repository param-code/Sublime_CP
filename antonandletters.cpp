#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	set<char> x;
	for(int i = 1;i < s.size();i += 3){
		if(s[i] >= 'a' && s[i] <= 'z'){
			x.insert(s[i]);
		}
	}
	cout << x.size() << endl;
}