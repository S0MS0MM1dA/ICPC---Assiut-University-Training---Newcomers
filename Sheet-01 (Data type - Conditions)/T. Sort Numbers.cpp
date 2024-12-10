#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  float a,b,c; cin>>a>>b>>c;
  if(a>=b && a>=c){
    if(b>=c){
      cout<<c<<'\n';
      cout<<b<<'\n';
      cout<<a<<'\n';
    }
    else{
      cout<<b<<'\n';
      cout<<c<<'\n';
      cout<<a<<'\n';
    }
  }
  else if(b>=a && b>=c){
    if(a>=c){
      cout<<c<<'\n';
      cout<<a<<'\n';
      cout<<b<<'\n';
    }
    else{
      cout<<a<<'\n';
      cout<<c<<'\n';
      cout<<b<<'\n';
    }
  }
  else if(c>=a && c>=b){
    if(a>=b){
      cout<<b<<'\n';
      cout<<a<<'\n';
      cout<<c<<'\n';
    }
    else{
      cout<<a<<'\n';
      cout<<b<<'\n';
      cout<<c<<'\n';
    }
  }
  cout<<'\n';
  cout<<a<<'\n';
  cout<<b<<'\n';
  cout<<c<<'\n';
}