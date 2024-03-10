#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,m;
	cin >> n;
	x = 0;
	int count = 0;
	for(int i = 0;i < n;i++){
		cin >> m;
		if(m != x){
			x = m;
			count++;
		}
	}
	cout << count << endl;
}