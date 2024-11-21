#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  int a,b,c; cin>>a>>b>>c;
  if(a<=b){
    if(a<=c){
      cout<<a<<" ";
    }
    else{
      cout<<c<<" ";
    }
  }
  else{
    if(b<=c){
      cout<<b<<" ";
    }
    else{
      cout<<c<<" ";
    }
  }
  if(a>=b){
    if(a>=c){
      cout<<a<<'\n';
    }
    else{
      cout<<c<<'\n';
    }
  }
  else{
    if(b>=c){
      cout<<b<<'\n';
    }
    else{
      cout<<c<<'\n';
    }
  }

  return 0;
}