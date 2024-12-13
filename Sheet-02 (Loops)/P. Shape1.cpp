#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n; cin>>n;
  for(int i=n; i>=0; i--){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<'\n';
  }
  return 0;
}
