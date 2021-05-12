#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n+1);
        ll cnt=0;
        map<ll,ll>mpp;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            mpp[arr[i]-i ]++;
        }
        ll a=0;
        for(int i=-n;i<n;i++){
            if(mpp[i]>=2){
                cnt=mpp[i]-1;
                a+= (cnt*(cnt+1))/2;
            }
        }

        cout<<a<<endl;

    }

    return 0;
}