#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int j=m*n;
    if(j%2==0 && j!=0){cout<<j/2;}
    else if (j==0){cout<<0;}
    else{cout<<(j-1)/2;}
}