#include <bits/stdc++.h>
using namespace std;
// Given array a of n integers.All integers are present in even count except one.Find that integer that has odd count in O(N) time complexity and O(1) space.
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v)cin >> x;
	int ans = 0;
	for(auto x:v)ans ^= x;
	cout << ans << endl;
}