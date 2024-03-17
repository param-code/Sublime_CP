#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,r;
	cin >> k >> r;
	int base = k;
	int count = 0;
	while(true){
		if (k % 10 == 0){
			count++;
			break;
		}
		if((k-r) % 10 == 0){
			count++;
			break;
		}
		k += base;
		count++;
	}
	cout << count;
}