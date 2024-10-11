//MD. Rasheduzzaman Imran
//Alhamdulillah for everything

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,arr[100000],x,y;
   cin>>n;
   bool f=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
         x=arr[i];
        if(arr[i]>0){
            f=1; 
            y=arr[i];
       }
    }
    if(f==1)
    {
        cout<<1<<" "<<x<<'\n';
        cout<<1<<" "<<y<<'\n'; 
         cout<<(n-2)<<" ";
        for(int i=0;i<n;i++)
     {
        if(arr[i]!=x&&arr[i]!=y&&i!=n-1)
         cout<<arr[i]<<" ";
        else if(arr[i]!=x&&arr[i]!=y&&i==n-1)
          cout<<arr[i];
  
     }
    }
    else
    {
        sort(arr,arr+n);
        cout<<1<<" "<<arr[0]<<'\n';
        cout<<2<<" "<<arr[1]<<" "<<arr[2]<<'\n';
        cout<<n-3<<" ";
        for(int i=3;i<n;i++)
    {
        if(i!=n-1)
        cout<<arr[i]<<" ";
        else
        cout<<arr[i];
    }
     
    }

    return 0;
}
