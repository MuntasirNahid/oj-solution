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
ll t, n, i, j, k, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w;
string a, b, c;
void nahid()
{
	cin >> n >> m;
	unordered_map<string, string>mp;
	while (m--)
	{
		cin >> a >> b;
		x = a.size();
		y = b.size();
		if (x <= y)
		{
			mp[a] = a;
			mp[b] = a;
		}
		else
		{
			mp[a] = b;
			mp[b] = a;
		}
	}
	while (n--)
	{
		cin >> c;
		cout << mp[c] << " ";
	}


}
int main()
{	MN7// cin>>t;while(t--)
	nahid();
}
