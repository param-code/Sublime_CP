#include <bits/stdc++.h>
using namespace std;

double eps = 1e-6;

double multiply(double mid,int n){
	double ans = 1;
	for(int i = 1;i <= n;i++){
		ans *= mid;
	}
	return ans;
}

int main(){
	double x;
	cin >> x;
	double n;
	cin >> n;
	double lo = 1,hi = x;
	double mid;
	while(hi-lo > eps){
		mid = (hi+lo) / 2;
		if(multiply(mid,n) < x)lo = mid;
		else hi = mid;
	}
	cout << setprecision(10) << lo << endl;
}