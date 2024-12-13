#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n; cin>>n;
  if(n==1){
    cout<<"NO"<<'\n';
    return 0;
  }
  bool flag = true;
  for(int i=2; i<n/2; i++){
    if(n%i==0) flag = false;
  }
  if(flag){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
  return 0;
}
