#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    ll factorial = 1;
    for(int i=1; i<=n; i++){
      factorial *= i;
    }
    cout<<factorial<<'\n';
  }
  return 0;
}
