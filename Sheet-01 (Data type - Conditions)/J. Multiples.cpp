#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  int a,b; cin>>a>>b;
  if((a%b==0) || (b%a==0)){
    cout<<"Multiples"<<'\n';
  }
  else{
    cout<<"No Multiples"<<'\n';
  }

  return 0;
}