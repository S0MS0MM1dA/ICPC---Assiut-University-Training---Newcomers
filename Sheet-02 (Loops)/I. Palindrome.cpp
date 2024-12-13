#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n,temp,num = 0; cin>>n;
  temp = n;
  while(temp>0){
    int last_digit = temp%10;
    temp /= 10;
    num = (num*10) + last_digit;
  }
  cout<<num<<'\n';
  if(n == num){
    cout<<"YES"<<'\n';
  }
  else cout<<"NO"<<'\n';
  return 0;
}
