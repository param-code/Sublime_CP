#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int x[n];
	int y[m];
	for(int i = 0;i < n;i++){
		cin >> x[i];
	}
	for(int i = 0;i < m;i++){
		cin >> y[i];
	}
	int merge[n+m];
	int j = 0;
	int k = 0;
	for(int i = 0;i < n+m;i++){
		int c;
		if(j == n){c = y[k];k++;}
		else if(k == m){c = x[j];j++;}
		else {
			if(x[j] < y[k]){
				c = x[j];
				j++;
			}else{
				c = y[k];
				k++;
			}
		}
		merge[i] = c;
	}
	for(auto a:merge)cout << a << ' ';
	cout << endl;
}