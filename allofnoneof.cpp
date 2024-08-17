#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {1,2,3,4,5};
	cout << any_of(begin(v),end(v),[](int x){return x < 2;}) << endl; // all_of none_of any_of
}