#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int t; cin>>t;
  while(t--){
    int x,y,i=0,j=0,sum=0;
    cin>>x>>y;
    if(x>y){
      i=y+1; j=x-1;
    }
    else{
      i=x+1; j=y-1;
    }
    for(i; i<=j; i++){
      if(i%2==1){
        sum+=i;
      }
    }
    cout<<sum<<'\n';
  }
  return 0;
}
