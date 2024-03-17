#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int count = 0;
	while(true){
		if(a == 0 || b == 0) break;
		a--;
		b--;
		count++;
	}
	int same = (a + b)/2;
	cout << count << " " <<same << endl;
}