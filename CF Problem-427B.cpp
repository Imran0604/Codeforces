//MD. Rasheduzzaman Imran
//Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

vector < int > v;
 
int main(){
    int n,t,c;
    cin >> n >> t >> c;
    v.push_back( -1 );
    for( int i=0; i<n; i++){
        int temp;
        scanf("%d",&temp);
        if(temp>t) v.push_back(i);
    }
    v.push_back(n);
    long long ans=0;
    for(int i=1; i< int( v.size() ); i++){
        int diff = v[i] - v[i-1]-1;
        ans+= max( diff-c+1 , 0 );
    }
    cout<<ans<<'\n';
    return 0;
}
