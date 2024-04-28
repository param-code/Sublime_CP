#include <bits/stdc++.h>
using namespace std;
bool isprime(int x){
    for(int i = 2;i <= x/2;i++){
        if(x % i == 0)return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int x,y;
    cin >> x >> y;
    int count = 0;
    int i = 2;
    while(x < y){
        if(x % i == 0 && isprime(i)){
            x -= i;
            count++;
        }else i++;
    }
    cout << count << endl;
    }    
}