#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b*log(a) > d*log(c))
    cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
  return 0;
}