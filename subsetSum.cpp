#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> arr,int sum){
	int size = arr.size();
	int t[size+1][sum+1];
	for(int i = 0;i < size+1;i++){
		for(int j = 0;j < sum+1;j++){
			if(i == 0)t[i][j] = false;
			if(j == 0)t[i][j] = true;
		}
	}
	for(int i = 1;i < size+1;i++){
		for(int j = 1;j < sum+1;j++){
			if(arr[i-1] <= j){
				t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[size][sum];
}

int main(){
	vector<int> arr = {2,3,7,8,10};
	int sum = 11;
	bool ans = solve(arr,sum);
	if(ans)cout << "YES" << endl;
	else cout << "NO" << endl;
}