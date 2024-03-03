#include <bits/stdc++.h>
using namespace std;
int main(){
	int minOperations(vector<int>& nums, int k) {
     int output = 0;
     for (int i = 0;nums[i] < nums.size;i++){
     	if (i < k){
     		output++;
     	}
     }
     return output;   
    }
}