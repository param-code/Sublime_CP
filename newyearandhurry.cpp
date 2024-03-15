#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int rem = 240 - k;
	int ans = 0;
	int i = 1;
	int count = 0;
	while(i <= n){
		int c = 5*i;
		ans += c;
		if(ans <= rem){
			i++;
			count++;
		}else break;}
	cout << count << endl;
}