#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int temp = 0;
	for (int i = 0;i < s.length();i+=2){
		if (s[i] != '+'){
			for (int j = i+2;j < s.length();j+=2){
				if (int(s[i] > int(s[j]))){
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
	}
	cout << s;
}