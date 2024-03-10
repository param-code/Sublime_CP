#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin >> n;
	vector<int> temp;
	int max = 0;
	while(cin >> a){
		temp.push_back(a);
		if(a > max) max = a;
	}
	int min = max;
	for(auto x:temp) if (x < min) min = x;
	
}