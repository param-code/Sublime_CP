#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	vector<char> s = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	while(t--){
		cin >> n;
		if(n == 1) cout << "NO";
		else{ cout << "YES" << endl;
			for(int i = 0;i < n/2;i++){
			cout << s[i] << s[i];
		}
	}
		cout << endl;
	}
}