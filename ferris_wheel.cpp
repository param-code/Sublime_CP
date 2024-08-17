#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	vector<int> weight(n);
	for(auto &x:weight)cin >> x;
	int start = 0;
	int end = n-1;
	int ans = 0;
	sort(weight.begin(),weight.end());
	while(start <= end){
		if((weight[start] + weight[end]) <= x){
			start++;
			end--;
		}else end--;
		ans++;
	}
	cout << ans << endl;
}