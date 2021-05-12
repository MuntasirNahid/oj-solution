#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pi acos(-1)
#define INF 1e18
#define MN7 ios::sync_with_stdio(0);cin.tie(nullptr);
#define MOD 1000000007
#define popb pop_back()
#define popf pop_front()
#define revers(x) reverse(x.begin(),x.end())
#define fo(i,a,n) for(i=a;i<n;i++)
using namespace std;
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans,u,v,w;
string s;
void nahid()
{
	a=0;b=0;c=0;cnt=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
    	cin>>v[i];
    	
    }
    for(i=0;i<n;i++)
    {
    	if(v[i]%3==0)a++;
    	else if(v[i]%3==1)b++;
    	else c++;
    }
    x=n/3;
    while(a>x || b>x || c>x)
    {
    	
    	 if(a>x)
    	{
    		a--;b++;
    		cnt++;
    	}
    	else if(b>x)
    	{
    		b--;c++;
    		cnt++;
    	}
    	else if(c>x)
    	{
    		c--;a++;
    		cnt++;
    	}
    	
    }
    cout<<cnt<<endl;


}
int main()
{	MN7 cin>>t;while(t--)
	nahid();
}
