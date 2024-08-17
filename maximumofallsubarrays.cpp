#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> nums = {1,3,-1,-3,5,3,6,7};
	int size = 3;
	vector<int> ans;
	deque<int> q;
	int i = 0,j = 0;
	while(j < nums.size()){
		while(!q.empty() && q.back() < nums[j])q.pop_back();
		q.push_back(nums[j]);
		if(j-i+1 < size)j++;
		else if(j-i+1 == size){
			ans.push_back(q.front());
			if(q.front() == nums[i])q.pop_front();
			i++;
			j++;
		}
	}
	for(auto x:ans)cout << ' ';
	cout << endl;
}