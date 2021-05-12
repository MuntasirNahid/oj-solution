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
	cin>>n>>x;
	vector<int>v(n);
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	cnt=0;a=0;
	for(i=0;i<n;i++)
	{
		cnt+=v[i];
	}
	if(cnt==x)
	{
		cout<<"NO"<<endl;
	
	}
	else
	{ cout<<"YES"<<endl;
		if(v[0]>x)
		{
          for(i=0;i<n;i++)
          {
          	cout<<v[i]<<" \n"[i==n-1];
          }
		}
		else
		{
			for(i=0;i<n;i++)
			{
				a+=v[i];
				if(a==x)
				{
					cout<<v[i+1]<<" "<<v[i]<<" ";
					i++;
				}
				else
				{
					cout<<v[i]<<" ";
				}


			}
			cout<<endl;
		}
	}

}
int main()
{	MN7 cin>>t;while(t--)
	nahid();
}
