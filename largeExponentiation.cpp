#include <bits/stdc++.h>
using namespace std;
cont int M = 1e18+10;

// if b is so big that is bigger than 10^18 then use,
// ETF -> a^b % M = (a^(b%(M-1))) % M if M is prime
// else a^b % M = (a^(b%$(M))) % M , here $ is euler totient function sign

int largeExp(int a,int b){ // binary multiplication
	a = largeExp(2,1024);
	int ans = 1;
	while(b){
		if(b&1){
			ans = binaryMultiply(ans,a);
		}
		a = binaryMultiply(a,a);
		b >>= 1;
	}
}

long long binaryMultiply(long long a,long long b){
	long long ans = 0;
	while(b){
		if(b&1){
			ans = (ans + a) % M;
		}
		a = (a + a) % M;
		b >>= 1;
	}
	return ans;
}

int main(){
	int a = 2,b = 10;
	int ans = largeExp(int a,int b);
	cout << ans << endl;
}