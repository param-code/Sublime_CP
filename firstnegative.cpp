#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {-8, 2, 3, -6, 10};
	int size = 2;
	vector<int> ans;
	deque<int> temp;
	int i = 0,j = 0;
	while(j < nums.size()){
		if(nums[j] < 0)temp.push_back(nums[j]);
		if(j-i+1 < size)j++;
		else if(j-i+1 == size){
			if(temp.size() == 0)ans.push_back(0);
			else{
				ans.push_back(temp.front());
				if(nums[i] == temp.front())temp.pop_front();
			}
			i++;
			j++;
		}
	}
	for(auto x:ans)cout << x << ' ';
	cout << endl;
}