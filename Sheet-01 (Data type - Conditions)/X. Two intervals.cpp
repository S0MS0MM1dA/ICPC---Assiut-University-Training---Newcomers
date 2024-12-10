#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if((d>b) && (a<=c) && (b>=c)){
    cout<<c<<" "<<b<<'\n';
  }
  else if((c<a) && (a<=d) && (b>=d)){
    cout<<a<<" "<<d<<'\n';
  }
  else if(a<=c && b>=d){
    cout<<c<<" "<<d<<'\n';
  }
  else if((a>=c) && (b<=d)){
    cout<<a<<" "<<b<<'\n';
  }
  else cout<<"-1"<<'\n';
  return 0;
}