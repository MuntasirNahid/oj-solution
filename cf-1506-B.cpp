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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w;
string s;
void nahid()
{
	cin >> x >> n;
	cin >> s;
	m = 0;
	vector<int>v;
	for (i = 0; i < x; i++)
	{
		if (s[i] == '*')
		{
			v.pb(i);
		}
	}
	m = v.size();
	ans = 1;
	if (m > 1)ans++;
	a = v[0];
	for (i = 1; i < m; i++)
	{
		if (v[i] - a > n)
			{
				ans++;
				a=v[i-1];
			}
	}
	cout << ans << endl;


}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
