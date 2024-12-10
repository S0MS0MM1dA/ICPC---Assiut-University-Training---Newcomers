#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 9;
const int RANGE = 255;
int32_t main(){
  float x,y; cin>>x>>y;
  if(x>0 && y>0) cout<<"Q1"<<'\n';
  if(x<0 && y>0) cout<<"Q2"<<'\n';
  if(x<0 && y<0) cout<<"Q3"<<'\n';
  if(x>0 && y<0) cout<<"Q4"<<'\n';
  if(x==0 && y==0) cout<<"Origem"<<'\n';
  if(x==0 && y!=0) cout<<"Eixo Y"<<'\n';
  if(y==0 && x!=0) cout<<"Eixo X"<<'\n';
  return 0;
}