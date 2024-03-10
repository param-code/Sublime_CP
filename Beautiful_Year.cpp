#include <bits/stdc++.h>
using namespace std;
int main(){
	int y;
	cin >> y;
	for(int i = 0;i < 9000;i++){
		int temp = y+1;
		set<int> x;
		while(temp > 0){
			int digit = temp % 10;
			x.insert(digit);
			temp /= 10;
		}
		if (x.size() == 4){
			break;
		}
		else y++;
	}
	cout << y+1 << endl;
}