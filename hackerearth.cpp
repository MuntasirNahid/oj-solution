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
#define sz 1000
using namespace std;
ll t, n, i, j, k, a, b, d, p, q, r, x, y, m, cnt, flag, ans;
string s, s1, s2;
vector<int>adj[sz];
bool visited[sz];

void dfs(ll z)
{
	visited[z] = true;
	for (int i = 0; i < adj[z].size(); ++i)
	{
		if (visited[adj[z][i]] == false)
			dfs(adj[z][i]);
	}

}
void init(int n)
{
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
}
void nahid()
{
	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	init(n);
	cin >> a;
	dfs(a);
	for (int i = 1; i <= n; ++i)
	{
		if (visited[i] == false)
			cnt++;

	}
	cout << cnt << endl;
}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
