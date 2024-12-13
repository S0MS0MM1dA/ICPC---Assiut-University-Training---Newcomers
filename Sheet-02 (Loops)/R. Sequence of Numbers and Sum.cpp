#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){

  while(true){
    int n,m,i=0,j=0,sum=0;
    cin>>n>>m;
    if(n>m){
      i=m; j=n;
    }
    else{
      i=n; j=m;
    }
    if(n<=0||m<=0) break;
    else{
      for(i; i<=j; i++){
        cout<<i<<' ';
        sum+=i;
      }
      cout<<"sum ="<<sum<<'\n';
    }
  }
  return 0;
}
