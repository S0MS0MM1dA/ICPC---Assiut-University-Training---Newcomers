#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;
 
int32_t main(){
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  if((a+b-c == d) || (a-b+c == d)||
    (a+b*c == d) || (a*b+c == d)||
    (a-b*c == d) || (a*b-c == d)){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
 
  return 0;
}