#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;

int32_t main(){
  int a,b; cin>>a>>b;
  int ceil,floor, round;
  ceil = (a+b-1)/b;
  floor = a/b;
  //round = a/b;
  int mod = a%b;
  double check = (double)mod/b;
  if(check>=0.5){
    round = (a+b-1)/b;
  }
  else{
    round = a/b;
  }
  cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<'\n';
  cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil<<'\n';
  cout<<"round "<<a<<" / "<<b<<" = "<<round<<'\n';

  return 0;
}