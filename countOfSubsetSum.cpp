#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int sum){
	int size = v.size();
	int t[size+1][sum+1];
	for(int i = 0;i <= size;i++){
		for(int j = 0;j <= sum;j++){
			if(j = 0)t[i][j] = 0;
			if(i = 0)t[i][j] = 1;
		}
	}
	for(int i = 1;i <= size;i++){
		for(int j = 1;j <= sum;j++){
			if(v[i-1] <= j){
				t[i][j] = t[i-1][j] + t[i-1][j-v[i-1]];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[size][sum];
}

int main(){
	vector<int> arr = {2,3,5,6,8,10};
	int sum = 10;
	int count = solve(arr,sum);
	cout << count << endl;
}