#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int a,b,n; cin>>a>>b;
  int gcd = 0;
  if(a<b) n = a;
  else n = b;
  for(int i=1; i<=n; i++){
    if(a%i==0 && b%i==0){
      if(i>=gcd){
        gcd=i;
      }
    }
  }
  cout<<gcd<<'\n';
  return 0;
}
