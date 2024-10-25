// MD.Rasheduzzaman Imram
//Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int sum=max(2*((x+k-1)/k)-1,2*((y+k-1)/k));
        
        cout<<sum<<'\n';
    }

    return 0;
}
