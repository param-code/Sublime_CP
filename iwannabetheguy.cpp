#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,a,b;
	cin >> n;
	cin >> p;
	set<int> ans;
	for(int i = 0;i < p;i++){
		cin >> a;
		ans.insert(a);
	}
	cin >> q;
	for(int j = 0;j < q;j++){
		cin >> b;
		ans.insert(b);
	}
	if(ans.size() == n) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!";
}