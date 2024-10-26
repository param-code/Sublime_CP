#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i = 10;i >= 0;i--){
		cout << ((num>>i)&1);
	}
	cout << endl;
}

int main(){
	int n = 15;
	if(n & (n-1))cout << "not power of 2";
	else cout << "power of 2";
	cout << endl;
}