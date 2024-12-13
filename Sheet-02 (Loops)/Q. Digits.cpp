#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    if(n==0){
      cout<<0<<'\n';
    }
    else{
      while(n>0){
      int last_digit = n%10;
      n /= 10;
      cout<<last_digit<<' ';
    }
    cout<<'\n';
  }
  }
  return 0;
}
