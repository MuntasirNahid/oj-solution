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
	cnt = 0;
	cin >> n;
	vector<int>v(n);
	for (i = 0; i < n; i++)
		cin >> v[i];
	for (i = 0; i < n - 1; i++)
	{
		a = min(v[i], v[i + 1]);
		b = max(v[i], v[i + 1]);
		if (a * 2 < b)
		{
			while (a < b)
			{

				a = a * 2;
				if (a < b)
					cnt++;
			}
		}
	}

	cout << cnt << endl;
}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
