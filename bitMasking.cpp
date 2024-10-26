#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	// vector<int> days[n];
	vector<int> masks(n,0);
	for(int i = 0;i < n;i++){
		int num_workers;
		cin >> num_workers;
		int mask = 0;
		for(int j = 0;j < num_workers;j++){
			int day;
			cin >> day;
			mask = (maks | (1 << day));
			masks[i] = mask;
			// days[i].push_back(day);
		}
	}
	int max_days = 0;
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			int intersection = masks[i] & masks[j];
			int common_days = __inbuilt_popcount(intersection);
			int max_days = max(max_days,common_days);
			cout << i << ' ' << j << ' ' << common_days << endl;
		}
	}
	cout << max_days << endl;
}