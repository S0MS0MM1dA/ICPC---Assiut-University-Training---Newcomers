#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  ll a,b; cin>>a>>b;
  if(((a==0 && b>2) || (b==0 && a>2)) ||(a==0 && b==0)){
    cout<<"NO"<<'\n';
    return 0;
  }
  if((abs(a-b)==1) || (a==b)){
    cout<<"YES"<<'\n';
  }
  else cout<<"NO"<<'\n';
  return 0;
}
