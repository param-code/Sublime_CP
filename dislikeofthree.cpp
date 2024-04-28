#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		int z[1000] = {0};
		int x = 1;
		for(int i = 1;i <= 1000;i++){
			if(x % 3 != 0 || x % 10 != 3){
				z[i] = x;
				x++;
			}
		}
		cout << z[k] << endl;
	}
}