#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,o;
	cin >> n;
	int i = 0;
	string difficulty;
	while (i++ < n){
		cin >> o;
		if (o == 1){
			difficulty = "HARD";
			break;
		}else difficulty = "EASY";
	}
	cout << difficulty << endl;

}