#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long ans = 0;
    long long minimum = min({n,m,k});
    ans +=minimum;
 
    n = n-ans;
    m = m-ans;
    k = k-ans;
 
    minimum = min(n/2, k);
    ans +=minimum;
    cout<<ans<<'\n';
}