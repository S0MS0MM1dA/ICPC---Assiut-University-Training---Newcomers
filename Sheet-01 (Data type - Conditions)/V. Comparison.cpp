#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  int a,b;
  char s;
  cin>>a>>s>>b;
  if(s=='='){
    if(a==b){
      cout<<"Right"<<'\n';
    }
    else{
      cout<<"Wrong"<<'\n';
    }
  }
  if(s=='>'){
    if(a>b){
      cout<<"Right"<<'\n';
    }
    else{
      cout<<"Wrong"<<'\n';
    }
  }
  if(s=='<'){
    if(a<b){
      cout<<"Right"<<'\n';
    }
    else{
      cout<<"Wrong"<<'\n';
    }
  }
  return 0;
}