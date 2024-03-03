#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> resultArray(vector<int>& nums) {
     vector<int> arr1;
     arr1.push_back(nums[0]);
     vector<int> arr2;
     arr2.push_back(nums[1]);
     for (int i = 2;i < nums.size()-3;i++){
     	if (arr1[-1] > arr2[-1]){
     		arr1.push_back(nums[i]);
     	} else arr2.push_back(nums[i]);
     }
     vector<int> result = arr1 + arr2;
     return result;
    }
}