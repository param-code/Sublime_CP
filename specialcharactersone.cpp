#include <bits/stdc++.h>
using namespace std;
int search(string word){
	int count = 0;
	for(auto x:word){
		if(islower(x)){
			char z = toupper(x);
			if(word.find(z) < word.find(x) && islower(word[word.size()-1])){
				count = 0;
				break;
			}
			if(word.find(z) != string::npos && word.find(z) > word.find(x)){
				word[word.find(z)] = '0';
				count++;
			}
		}
	}
	return count;
}
int main(){
	string word = "aaAbcBC";
	cout << search(word) << endl;
}