#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin >> n;
	vector<int> temp;
	while(cin >> a) temp.push_back(a);
	int maxi = 0;
	int mini = 0;
	int max = 0;
	int min = temp[0];
	for(int i = 1;i <= n;i++){
		if(temp[i] > max) {
			max = temp[i];
			maxi = i;
		}
		if(temp[i] < min){
			min = temp[i];
			mini = i;
		}
	}
	if(maxi > mini) cout << (maxi - 1) + (n - mini)-1 << endl;
	else cout << (maxi-1) + (n - mini) << endl;
}
