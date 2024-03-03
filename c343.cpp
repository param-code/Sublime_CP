#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int n);
int rev;
int main(){
	int n;
	cin >> n;
	while (n > 0){
		if (ispalindrome(n) == true){
			if (cbrt(n) == floor(cbrt(n))) cout << n << endl;break;
		}
		n--;
	}
}
bool ispalindrome(int n){
	int x = n;
	int digit,
	rev = 0;
	while (n > 0){
		digit = n % 10;
		rev = (rev * 10) + digit;
		n /= 10;
	}
	if (rev == x) return true;
	return false;
}