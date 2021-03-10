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
#define sz 1000005
using namespace std;
ll t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
vector<ll>adj[sz], w[sz];
ll parent [sz], cost[sz];
ll dijkstra(ll st, ll en)
{
	priority_queue<pair<ll, ll>, vector< pair<ll, ll> >, greater < pair <ll, ll > > >pq;
	pq.push({0, st});
	cost[st] = 0;
	ll c, u;
	while (!pq.empty())
	{
		c = pq.top().first;
		u = pq.top().second;
		pq.pop();
		for (i = 0; i < adj[u].size(); i++)
		{
			if (c + w[u][i] < cost[adj[u][i]])
			{
				cost[adj[u][i]] = c + w[u][i];
				pq.push({cost[adj[u][i]], adj[u][i]});
				parent [ adj[u][i] ] = u;
			}
		}
	}
	return cost[en];
}

void init(ll n)
{
	for (i = 0; i < n; i++)
	{
		parent[i] = -1;
		cost[i] = INF;
	}
}
void nahid()
{
	cin >> n >> m;
	init(n);
	for (i = 0; i < m; i++)
	{
		cin >> x >> y >> z;
		x--;
		y--;
		adj[x].pb(y);
		adj[y].pb(x);
		w[x].pb(z);
		w[y].pb(z);
	}
	x = dijkstra(0, n - 1);
	x = n - 1;
	vector<ll>path;
	while (~x)
	{
		path.pb(x + 1);
		x = parent[x];
	}
	if (path.size() == 1)cout << "-1";
	else
	{
		reverse(path.begin(), path.end());
		for (i = 0; i < path.size(); i++)
		{
			cout << path[i] << " ";
		}
	}




}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
