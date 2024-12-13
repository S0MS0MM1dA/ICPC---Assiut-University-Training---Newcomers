#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n,even=0,odd=0,positive=0,negative=0; 
  cin>>n;
  for(int i=1; i<=n; i++){
    int x; cin>>x;
    if(x%2==0) even++;
    else odd++;
    if(x>0) positive++;
    if(x<0) negative++;

  }
  cout<<"Even: "<<even<<'\n';
  cout<<"Odd: "<<odd<<'\n';
  cout<<"Positive: "<<positive<<'\n';
  cout<<"Negative: "<<negative<<'\n';

  return 0;
}
