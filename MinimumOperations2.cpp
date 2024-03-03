#include <bits/stdc++.h>
using namespace std;
int main(){
	int minOperations(vector<int>& nums, int k) {
        int output = 0;
        for (int i = 0;i < nums.size();i++){
        	if(nums[i] < k){
        		int x = nums[i];
        		nums.erase(nums[i]);
        	}for (j = nums.size;j >= 0;j--){
        		if (nums[j] < k){
        			int y = nums[j];
        			nums.erase(nums[j]);
        		}
        	}
        	nums.pushback(min(x,y)*2+max(x,y));
        	output++;
        }
        return output;
    
}