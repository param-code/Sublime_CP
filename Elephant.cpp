#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	int steps = 0;
	while(true){
		if (x > 0 && x <= 5){
			steps++;
			break;
		}
		x -= 5;
		steps++;
	}
	cout << steps << endl;
}