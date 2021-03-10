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
#define sz 25
#define revers(x) reverse(x.begin(),x.end())
using namespace std;
string s, s1, s2;
int rr [] = {0, 0, 1, -1}; // to - right, left, down, up
int cc[] = {1, -1, 0, 0}; //from - left, right, up, down
char graph[sz][sz];
int  cost[sz][sz], n, m, t, i, j,z;
bool visited[sz][sz];
int pg(char ch)
{
	return (ch == 'a' || ch == 'b' || ch == 'c');
}
int bfs(int sa, int sb, int hx, int hy)
{
	queue<pair<int, int> >q;
	q.push({sa, sb});
	visited[sa][sb] = true;
	cost[sa][sb] = 0;
	while (q.size())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (i = 0; i < 4; i++)
		{
			int tx = x + rr[i];
			int ty = y + cc[i];
			if (tx < 0 || tx >= n || ty < 0 || ty >= m || graph[tx][ty] == 'm' || graph[tx][ty] == '#' || visited[tx][ty])
				continue;
			cost[tx][ty] = cost[x][y] + 1;
			visited[tx][ty] = true;
			q.push({tx, ty});

		}
	}
	return cost[hx][hy];

}
void init(int n,int m)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			visited[i][j]=false;
			graph[i][j]='0';
		}
	}
}
void nahid()
{
	cout<<"Case "<<++z<<": ";
	int aa, bb, dd, p, q, r, hx, hy, z, cnt, flag, ans;
	cin >> n >> m;
	vector<pair<int, int> >pos;
	init(n,m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> graph[i][j];
			if (graph[i][j] == 'h')
			{
				hx = i;
				hy = j;
			}
			if (pg(graph[i][j]))
			{
				pos.pb({i,j});
			}
		}

	}
	aa = bfs(pos[0].first, pos[0].second, hx, hy);
	bb = bfs(pos[1].first, pos[1].second, hx, hy);
	dd = bfs(pos[2].first, pos[2].second, hx, hy);
	ans = max({aa, bb, dd});
	cout << ans << endl;
}




int main()
{	MN7 cin >> t; while (t--)

		nahid();
}
