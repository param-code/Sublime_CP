#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void generate(vector<int> &temp,vector<int> &v,int i){
	if(i == v.size()){
		ans.push_back(temp);
		return;
	}
	generate(temp,v,i+1);
	temp.push_back(v[i]);
	generate(temp,v,i+1);
	temp.pop_back();
}

int main(){
	vector<int> v;
	int x;
	while(cin >> x){
		v.push_back(x);
	}
	vector<int> temp;
	generate(temp,v,0);
	for(auto x:ans){
		for(auto y:x){
			cout << y << ' ';
		}
		cout << endl;
	}
}