#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,x,count = 0;
		cin >> a;
		for(int i = 0;i < 3;i++){
			cin >> x;
			if(x > a) count++;
		}
		cout << count << endl;
	}
}