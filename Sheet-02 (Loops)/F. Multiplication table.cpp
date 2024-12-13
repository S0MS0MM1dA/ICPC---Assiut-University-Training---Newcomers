#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n; cin>>n;
  for(int i=1; i<=12; i++){
    cout<<n<<" * "<<i<<" = "<<n*i<<'\n';
  }
  return 0;
}
