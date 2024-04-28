#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector<long long> arr(n);
		map<long long,long long> temp;
		for(int i = 0;i < n;i++){
			cin >> arr[i];
			temp[arr[i]]++;
		}
		int index;
		for(int i = 0;i < n;i++){
			if(temp[arr[i]] == 1){
				index = i + 1;
				break;
			}
		}
		cout << index << endl;
	}
}