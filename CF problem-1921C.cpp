// MD. Rasheduzzaman Imran
// Alhamdulillah for everything

#include<bits/stdc++.h>
using namespace std;

#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define int                 long long
#define ll                  long long
#define ull                 unsigned long long
#define endl                '\n'
#define ff                  first
#define ss                  second
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()

#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define neg1                cout<<-1<<endl

#define PI                  3.141592653589793238
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define MOD                 1000000007
#define LLM                 1000000000000000007


void solve()
{
    int n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    v.insert(v.begin(),0);
    for(int i=1; i<=n; ++i)
    {
        int x=(v[i]-v[i-1])*a;
        f -= min(x,b);
        if(f<=0)
        {
            no;
            return;
        }
    }
    yes;
}

int32_t main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--) 
        solve();
}
