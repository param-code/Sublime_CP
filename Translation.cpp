#include <bits/stdc++.h>
using namespace std;
string translate(string a,string b);
int main(){
	string s,t;
	cin >> s >> t;
	string rev = "";
	for (int i = s.length()-1;i >= 0;i--){
		rev += s[i];
	}
	cout << translate(rev,t) << endl;
}
string translate(string a,string b){
	for(int i = 0;i < a.length();i++){
		if(a[i] != b[i]){
			return "NO";
	}
		}return "YES";
}