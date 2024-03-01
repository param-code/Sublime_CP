#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int x = 0;
	cin >> a;
	cin >> b;
	for (int i = 0;i < a.length();i++){
		if (tolower(a[i]) < tolower(b[i])){
			x = -1;
			break;
		}else if (tolower(b[i]) < tolower(a[i])){
			x = 1;
			break;
		}
	}
	cout << x;
}