#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n; cin>>n;
  ll arr[n],max = INT_MIN;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]>max){
      max = arr[i];
    }
  }
  cout<<max<<'\n';
  return 0;
}
