#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s,int open,int close){
	if(open == 0 && close == 0){
		cout << s << endl;
		valid.push_back(s);
		return;
	}
	if(open > 0){
		s.push_back('(');
		generate(s,open-1,close);
		s.pop_back();
	}
	if(close > 0){
		if(open < close){ // open count in string needs to be greater than the close the close count
			s.push_back(')');
			generate(s,open,close-1);
			s.pop_back();
		}
	}
}

int main(){
	int n;
	cin >> n;
	string s;
	generate(s,n,n);
}