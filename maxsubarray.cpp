#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {2,5,1,8,2,9,1};
	int size = 3;
	int sum = 0;
	int i = 0,j = 0;
	int ans = sum;
	while(j < nums.size()){
		if(j-i+1 < size){
			j++;
		}else{
			sum -= nums[i];
			i++;
			j++;
		}
		sum += nums[j];
		ans = max(sum,ans);
	}
	cout << ans << endl;
}