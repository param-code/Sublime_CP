#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i = 10;i >= 0;i--){
		cout << ((num>>i)&1);
	}
	cout << endl;
}

int main(){
	printBinary(59);
	int a = 59;
	int i = 3; // we wants to clear all the msb till 3rd bit i.e. 00000111011 -> 00000000011
	int b = (a&((1<<(i+1))-1));
	printBinary(b);
}