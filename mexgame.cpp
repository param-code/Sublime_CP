#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		set<int> x;
		int a;
		while(n--){
			cin >> a;
			x.insert(a);
		}
		sort(x.begin(),x.end());
		int y = 0;
		for(int i = 0;i < y;i++){
			if(x[i] != y)break;
			else y++;
		}
		cout << y << endl;
	}
}