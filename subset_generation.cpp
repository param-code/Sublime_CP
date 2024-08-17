#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void generate(vector<int> &v,vector<int> &temp,int index){
	if(index == v.size()){
		ans.push_back(temp);
		return;
	}
	generate(v,temp,index+1);
	temp.push_back(v[index]);
	generate(v,temp,index+1);
	temp.pop_back();
}
int main(){
	vector<int> v = {1,2,3};
	vector<int> temp = {};
	generate(v,temp,0);
	for(auto x:ans){
		for(auto y:x)cout << y << ' ';
		cout << endl;
	}
}