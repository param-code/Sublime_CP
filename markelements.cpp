#include <bits/stdc++.h>
using namespace std;
vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
	vector<long long> ans;
	for(int i = 0;i < queries.size();i++){
		nums[queries[i][0]] = 0;
		sort(nums.begin(),nums.end());
		for(int j = 0;j < queries[i][1];j++){
			nums[j] = 0;
		}
		int sum = 0;
		for(int k = 0;k < nums.size();k++){
			sum += nums[k];
		}
		ans.push_back(sum);
	}
	return ans;
}
int main(){
	vector<int> nums = {1,2,2,1,2,3,1};
	vector<vector<int>> queries = {{1,2},{3,3},{4,2}};
	for(auto x: unmarkedSumArray(nums,queries)){
		cout << x << endl;
	}
}