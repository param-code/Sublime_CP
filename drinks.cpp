#include <bits/stdc++.h>
using namespace std;
int main(){
	double n,p;
	cin >> n;
	double sum = 0;
	for(int i = 0;i < n;i++){
		cin >> p;
		sum += p/100;
	}
	cout << (sum/n)*100 << endl;
}