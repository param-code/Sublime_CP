#include<bits/stdc++.h>
using namespace std ;
 
int main(){
   int t;
   cin>>t;
   while(t--){
       long long n,l,r,ct=0;
       cin>>n>>l>>r;
       int f=n,h=0;
       long long v[n];
       while(f--){
          cin>>v[h++] ;
       }
       vector<long long>prefix ;
       long long el=0;
       for(int i=0 ; i<n ;i++){
          el+=v[i] ;
          prefix.push_back(el) ;
       }
       int i=0,j=0 ;
       while(j<n){
           if(i>j){
             j=i;
             continue;
           }
           long long sum=0;
           if(i>=1)
            sum=prefix[j]-prefix[i-1] ;
           else  sum=prefix[j];
 
           if(sum<l){
              j++;
           }
           else if(sum>=l && sum<=r){
              ct++ ;
              i=j+1;
           }
           else {
              i+=1;
           }
       }
       cout<<ct<<endl ;
   }
   return 0;
}