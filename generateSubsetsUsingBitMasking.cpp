#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums){
	int n = nums.size();
	int subset_count = (1<<n);
	vector<vector<int>> subsetss;
	for(int mask = 0;mask < subset_count;mask++){
		vector<int> subset;
		for(int i = 0;i < n;i++){
			if((mask & (1<<i)) != 0)subset.push_back(nums[i]);
		}
		subsetss.push_back(subset);
	}
	return subsetss;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v)cin >> x;
	auto subset = subsets(v);
	for(auto x:subset){
		for(auto y:x){
			cout << y << ' ';
		}
		cout << endl;
	}
}