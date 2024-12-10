#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  int n; cin>>n;
  int year = n/365;
  n -= year*365;
  int month = n/30;
  n-= month*30;
  int day = n;
  cout<<year<<" years"<<'\n';
  cout<<month<<" months"<<'\n';
  cout<<day<<" days"<<'\n';
  return 0;
}