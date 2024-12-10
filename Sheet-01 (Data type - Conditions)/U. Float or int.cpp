#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  float n; cin>>n;
  int x = n;
  float y = n - x;
  if(x==n) cout<<"int "<<x<<'\n';
  else cout<<"float "<<x<<" "<<y<<'\n';
}