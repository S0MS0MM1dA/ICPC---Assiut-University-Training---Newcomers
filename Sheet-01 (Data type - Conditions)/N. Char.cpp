#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  char x; cin>>x;
  if(x>=65 && x<=90){
    cout<<char(x+32)<<'\n';
  }
  else{
    cout<<char(x-32)<<'\n';
  }
  return 0;
}