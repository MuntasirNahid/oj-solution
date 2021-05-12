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
string s, s1;
void nahid()
{
	cin >> s >> s1;
	a = s.size();
	b = s1.size();
	ans = 0;
	for (i = 0; i < a; i++)
	{
		cnt = 0;
		for (j = 0; j < b; j++)
		{
			if (s[i] == s1[j])
			{
				while (s[i + cnt] == s1[j + cnt] && i + cnt < a && j + cnt < b)
				{
					cnt++;
				}
				ans = max(ans, cnt);
			}
		}

	}
	cout << a + b - 2 * ans << endl;

}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
