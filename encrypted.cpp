#include <bits/stdc++.h>
using namespace std;
int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto x:nums){
        	string a = to_string(x);
        	char max = '0';
        	for(int i = 0;i < a.length();i++){
        		if(a[i] > max) max = a[i];
        	}
        	for(int i = 0;i <a.length();i++){
        		a[i] = max;
        	}
        	sum += stoi(a);
        }
        return sum;
    }
int main(){
	vector<int> nums = {10,21,31};
	cout << sumOfEncryptedInt(nums) << endl;
}