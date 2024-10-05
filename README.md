#codeforces problem solution
//MD. Rasheduzzaman Imran
// Alhamdulillah for everything


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    ll sum1=0;ll m1=0,m2=0;
    for(int i=0;i<n;i+=2){
        sum1++;
        m1=max(m1,v[i]);
    }
    ll sum2=0;
    for(int i=1;i<n;i+=2){
        sum2++;
        m2=max(m2,v[i]);
    }
    cout<<max(sum1+m1,sum2+m2)<<'\n';
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
} 
