#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin >> n >> q;
	int arr[q];
	for(int i = 0;i < q;i++){
		cin >> arr[i];
	}
	for(int i = 1;i < q;i++){
		if(arr[i] > arr[i-1])n--;
		else if(arr[i] > arr[i])n++;
	}
	cout << n-1 << endl;
}