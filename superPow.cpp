#include <bits/stdc++.h>
using namespace std;
const int M = 1337;

vector<int> divideby2(vector<int> &b){
	for(int i = 0;i < b.size();i++){
		b[i] /= 2;
	}
	return b;
}

bool emptyornot(vector<int> &b){
	for(auto x:b){
		if(x > 0)return true;
	}
	return false;
}

int superPower(int a,int b,int m){
	int ans = 0;
	while(b){
		if(b&1){
			ans = (ans * a) % m;
		}
		a = (a * a) % m;
		b >>= 1;
		// divideby2(b);
	}
	return ans;
}

int superPow(int a,vector<int> &b){
	// vector<int> c;
	// etf -> 1140
	int c = 0;
	for(int i = 0;i < b.size();i++){
		c = (c * 10 + b[i]) % 1140;
	}
	return superPower(a,c,1137);
} 

int main(){
	int a = 2;
	vector<int> b = {1,0};
	int ans = superPow(a,b);
	cout << ans << endl;
}