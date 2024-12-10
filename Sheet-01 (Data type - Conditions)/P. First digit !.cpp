#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  char x; cin>>x;
  int n = x-'0';
  if(n%2==0) cout<<"EVEN"<<'\n';
  else cout<<"ODD"<<'\n';
  return 0;
}