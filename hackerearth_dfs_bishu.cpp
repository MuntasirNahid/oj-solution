/* Your Love Makes Me STRONG,
   Your Hate Makes Me UNSTOPABBLE.
*/
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
#define sz 10000
using namespace std;
ll t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, l, cnt, flag, ans;
string s, s1, s2;
vector<ll>adj[sz];
bool visited[sz];
void dfs(ll s, ll l)
{
	visited[s] = l;
	for (i = 0; i < adj[s].size(); i++)
	{
		if (visited[ adj [s][i] ] == 0)
			dfs(adj[s][i], l + 1);
	}

}
void init(ll n)
{
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
}
void nahid()
{

	cin >> n;
	init(n);
	n--;
	while (n--)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);

	}
	

	l = 1;
	dfs(1, l);
	a = INT_MAX;
	b = 0;
	cin >> q;
	while (q--)
	{
		cin >> m;
		if (a > visited[m])
		{
			a = visited[m];
			b = m;
		}
	}
	cout << b << endl;

}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
