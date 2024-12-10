#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int x; cin>>x;
  int last_digit = x%10;
  int second_last = x/10;
  if((last_digit%second_last==0)||(second_last%last_digit==0)){
    cout<<"YES"<<'\n';
  } 
  else cout<<"NO"<<'\n';
  return 0;
}
