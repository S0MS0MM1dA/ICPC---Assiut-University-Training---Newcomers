#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  ll a,b,k; cin>>a>>b>>k;
  if((a%k==0) && (b%k==0)){
    cout<<"Both"<<'\n';
  }
  else if(a%k==0) cout<<"Memo"<<'\n';
  else if(b%k==0) cout<<"Momo"<<'\n';
  else cout<<"No One"<<'\n';
  return 0;
}