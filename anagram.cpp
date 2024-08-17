#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "forxxorfxdofr";
	string target = "fox";
	int ans = 0;
	unordered_map<char,int> mpp;
	for(auto x:target)mpp[x]++;
	int count = mpp.size();
	int i = 0,j = 0;
	while(j < s.size()){
		if(mpp.find(s[j]) != mpp.end()){
			mpp[s[j]]--;
			if(mpp[s[j]] == 0)count--;
		}
		if(j-i+1 < target.size())j++;
		else if(j-i+1 == target.size()){
			if(count == 0)ans++;
			if(mpp.find(s[i]) != mpp.end()){
				mpp[s[i]]++;
				if(mpp[s[i]] == 1)count++;
			}
			i++;
			j++;
		}
	}
	cout << ans << endl;
}