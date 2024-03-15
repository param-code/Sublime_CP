#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long bill = 0;
	while(n > 0){
		if(n < 5 && n >= 0) {
			n--;
			bill++;
		}
		if(n < 10 && n >= 5) {
			n -= 5;
			bill++;
		}
		if(n < 20 && n >= 10) {
			n -= 10;
			bill++;
		}
		if(n < 100 && n >= 20) {
			n -= 20;
			bill++;
		}
		if(n >= 100) {
			n -= 100;
			bill++;
		}
	}
	cout << bill << endl;
}