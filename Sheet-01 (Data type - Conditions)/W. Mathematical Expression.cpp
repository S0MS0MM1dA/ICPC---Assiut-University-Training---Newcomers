#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  int a,b,c;
  char s,e;
  cin>>a>>s>>b>>e>>c;
  if(s=='+'){
    if((a+b) == c){
      cout<<"Yes"<<'\n';
    }
    else{
      cout<<a+b<<'\n';
    }
  }
  if(s=='-'){
    if((a-b)==c){
      cout<<"Yes"<<'\n';
    }
    else{
      cout<<a-b<<'\n';
    }
  }
  if(s=='*'){
    if((a*b)==c){
      cout<<"Yes"<<'\n';
    }
    else{
      cout<<a*b<<'\n';
    }
  }
  return 0;
}