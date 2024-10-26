#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i = 10;i >= 0;i--){
		cout << ((num>>i)&1);
	}
	cout << endl;
}

int main(){
	for(char c = 'A';c <= 'Z';c++){
		printBinary(int(c));
	}
	for(char c = 'a';c <= 'z';c++){
		printBinary(int(c));
	}
	char c = 'A';
	char d = (c|(1<<5));
	cout << d << endl;
	char e = (d&~(1<<5));
	cout << e << endl;

	// other trick
	cout << char(1<<5) << endl; // it's space or 32 value
	cout << char('C' | ' ') << endl;

	printBinary('_');
	cout << char('c' & '_') << endl;
}