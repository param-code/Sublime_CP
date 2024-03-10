#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> x;
	int y;
	while(cin >> y) x.push_back(y);
	for(int i = x.size()-1;i >= 0;i--){
		cout << x[i] << endl;
	}
}