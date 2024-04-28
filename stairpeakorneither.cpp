#include <bits/stdc++.h>
using namespace std;
string solve(int x,int y,int z){
	if(y > x && y < z){
		return "STAIR";
	}
	if(y > x && y > z){
		return "PEAK";
	}
	return "NONE";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		cout << solve(a,b,c) << endl;
	}
}