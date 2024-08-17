#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {2,5,1,8,2,9,1};
	int size = 3;
	int sum = 0;
	for(int i = 0;i < size;i++){
		sum += nums[i];
	}
	int temp = sum;
	for(int i = size;i < nums.size();i++){
		temp -= nums[i-size];
		temp += nums[size];
		sum = max(temp,sum);
		cout << temp << ' ';
	}
	cout << sum << endl;
}