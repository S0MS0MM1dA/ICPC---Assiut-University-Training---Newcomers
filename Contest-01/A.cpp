#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  float x, price; cin>>x>>price;
  cout<<setprecision(2)<<fixed<<(price/(100-x))*100<<'\n';
  return 0;
}