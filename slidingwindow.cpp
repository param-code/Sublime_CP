#include <bits/stdc++.h>
using namespace std;
int main(){
	// Sliding Window Problem
	vector<int> nums = {2,3,5,2,9,7,1};
	int size = 3;
	int maxi = 0;
	for(int i = 0;i < nums.size();i++){
		int sum = 0;
		for(int j = i;j < i+size;j++){
			sum += nums[j];
		}
		maxi = max(sum,maxi);
	}
	int ans = nums[0] + nums[1] + nums[2];
	int x = ans;
	for(int i = size;i < nums.size();i++){
		ans -= nums[i-size];
		ans += nums[i];
		x = max(ans,x);
	}
	cout << maxi << endl;
}