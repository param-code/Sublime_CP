#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector<int> place;
	for(unsigned long long i = 0;i < s.length();i++){
		if(s[i] == '|') place.push_back(i);
	}
	s.erase(place[0],place[1]-place[0]+1);
	cout  << s << endl;
}