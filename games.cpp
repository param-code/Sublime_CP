#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int answer = 0;
	vector<int> home;
	vector<int> guest;
	while(n--){
		int h,a;
		cin >> h >> a;
		home.push_back(h);
		guest.push_back(a);
		}
		for(int i = 0;i < home.size();i++){
			for(int j = 0;j < guest.size();j++){
				if(home[i] == guest[j]) answer++;
		}
	}
	cout << answer << endl;
}