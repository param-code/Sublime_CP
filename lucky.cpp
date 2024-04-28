#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string ticket;
		cin >> ticket;
		int sumx = 0;
		int sumy = 0;
		for(int i = 0;i < 3;i++){
			sumx +=	(ticket[i] + '0');
		}
		int n = ticket.length();
		for(int i = n-1;i > n-4;i--){
			sumy += (ticket[i] + '0');
		}
		if(sumx == sumy) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}