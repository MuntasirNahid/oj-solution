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
#define sz 100005
using namespace std;
ll  t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
vector<ll>adj[sz];
ll parent[sz], child[sz], color[sz];
bool visited[sz];
void dfs(ll s)
{
	color[s] = 1;

	for (auto u : adj[s])
	{

		if (color[ u ] == 0)
		{
			parent[ u ] = s;
			child[s]++ ;
			dfs(u);
		}
	}
	color[s] = 2;

}
void nahid()
{
	cin >> n >> m;

	while (m--)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (i = 1; i <= n; i++)
	{
		dfs(i);
	}

	for (i = 1; i <= n; i++)
	{
		if (parent[i] != 0)
		{
			if (child[ parent[i] ] < child[i])ans++;
		}
	}
	cout << ans << endl;

}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
