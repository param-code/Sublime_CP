#include <bits/stdc++.h>
using namespace std;
// const int N = 1e9 + 7;
int arr[4];
int main(){
	for(int i = 0;i < 4;i++){
		cin >> arr[i];
		if(arr[i] > arr[0]) swap(arr[i],arr[0]);
	}
	for(int i = 1;i <= 3;i++){
		cout << arr[0] - arr[i] << " ";
	}
	cout << endl;
}