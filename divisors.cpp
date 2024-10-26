#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 36;
	int count = 0,sum = 0;
	/* for(int i = 1;i <= 24;i++){
		if(n%i == 0){
			count++;
			sum += i;
			cout << i << ' ';
		}
	} */
	for(int i = 1;i*i <= n;i++){ // i <= sqrt(n)
		if(n%i == 0){
			count++;
			sum += i;
			if(n/i != i){
				count++;
				sum += n/i;
			}
			cout << i << ' ' << n/i << ' ';
		}
	}
	cout << endl;
	cout << "Count is " << count << endl << "Sum is " << sum << endl;

	// Now suppose you are given n queries and n = 10^6 in which you have to find count and sum of divisor of the number given in each query
	// we can find this using taking prime factors like 36 = 2^2 & 3^2 then using gp formula of n^n1-1 - 1/n-1
}