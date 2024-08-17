#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {1,2,3,7};
	int target = 11;
	bool dp[5][12];
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 12;j++){
			if(i == 0)dp[i][j] = false;
			if(j == 0)dp[i][j] = true;
			if(nums[i-1] < j){
				dp[i][j] = dp[i][j-nums[i-1]] || dp[i-1][j];
			}else dp[i][j] = dp[i-1][j];
		}
	}
	if(dp[4][11])cout << "YES" << endl;
	else cout << "NO" << endl;
}