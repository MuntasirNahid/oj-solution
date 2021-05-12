#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t=1,num=10000;
	cin>>t;
    ll i,j;
    vector <ll> v;

    for(i=1;i<=num;i++)
    {
        v.pb(i*i*i);
    }
	while(t--)
	{
        ll n;
        cin>>n;

        ll siz=v.size();

        ll l=0,r=siz-1,flag=0;

        while(l<=r)
        {
            if(v[l]+v[r]==n)
            {
                flag=1;
                break;
            }
            else if(v[l]+v[r]>n)
            {
                r--;
            }
            else
            {
                l++;
            }
            
            
        }

        if(flag)
            cout<<"YeS\n";
        else
            cout<<"nO\n";
	}
}