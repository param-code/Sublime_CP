#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i = 10;i >= 0;i--){
		cout << ((num>>i)&1);
	}
	cout << endl;
}

int main(){
	int n = 5;
	cout << (n>>1) << endl; // right shift divides the number by 2
	cout << (n<<1) << endl; // left shift multiplies the number by 2
}