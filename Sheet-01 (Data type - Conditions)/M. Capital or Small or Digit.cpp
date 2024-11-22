#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  char x; cin>>x;
  if(x<=57){
    cout<<"IS DIGIT"<<'\n';
    return 0;
  }
  cout<<"ALPHA"<<'\n';
  if(x>=65 && x<=90){
    cout<<"IS CAPITAL"<<'\n';
  }
  else{
    cout<<"IS SMALL"<<'\n';
  }
  return 0;
}