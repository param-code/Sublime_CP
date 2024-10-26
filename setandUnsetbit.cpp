#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i = 10;i >= 0;i--){
		cout << ((num>>i)&1);
	}
	cout << endl;
}

int main(){
	printBinary(9);
	int a = 9;
	int i = 3;
	if((a&(1<<i)) != 0)cout << "set bit" << endl;
	else cout << "not set bit" << endl;

	// how to set bits,below we are setting the first bit
	printBinary(a|(1<<1));

	// how to unset bits,below we are un setting the 0th bit
	// printBinary(a^(1<<0));

	// we will first invert the 1 << i then & it
	printBinary(a&~(1<<3));
	// printBinary(~a);


	// toggle a bit i.e 0->1 and 1->0
	printBinary(a^(1<<2)); // here 2nd bit will be toggled i.e. 0->1

	// for checking how many bits are set or not
	int setCount = 0;
	for(int i = 31;i >= 0;i--){
		if((a&(1<<i)) != 0)setCount++;
	}
	cout << setCount << endl;
	cout << __builtin_popcount(a) << endl;
}