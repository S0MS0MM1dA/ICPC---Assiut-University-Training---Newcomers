#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long a,b,c,d; cin>>a>>b>>c>>d;
  long long diff = (a*b) - (c*d);
  cout<<"Difference = "<<diff<<'\n';

  return 0;
}