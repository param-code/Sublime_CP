#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int police = 0;
	int crime = 0;
	while(n--){
		int a;
		cin >> a;
		if(a > 0) police += a;
		else if(police > 0){
			 police--;
		}else crime++;
	}
	cout << crime << endl;
}