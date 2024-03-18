#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int start = 0;
	int end = n-1;
	int sereja = 0;
	int dima = 0;
	int x = 1;
	while(start <= end){
		if(arr[start] > arr[end]){
			if(x % 2 != 0){
			sereja += arr[start];}
			else dima += arr[start];
			x++;
			start++;
		}else{
			if(x % 2 == 0){
			dima += arr[end];}
			else sereja += arr[end];
			x++;
			end--;
		}
	}
	cout << sereja << " " << dima << endl;
}