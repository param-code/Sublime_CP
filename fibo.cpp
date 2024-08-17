#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
	if(n <= 2)f = 1;
	else f = fibo(n-1) + fibo(n-2);
	return f;
}
int main(){
	int n;
	cout << fibo(n) << endl;
}