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
ll t, n, i, j, k, a, b, c, aa, bb, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w, cur;
string s;
void nahid()
{
	cur = 1; aa = 1; bb = 1;
	cin >> a >> b >> c;
	for (i = 0; i < c - 1; i++)
	{
		cur *= 10;
	}
	for (i = 0; i < a - c; i++)
	{
		aa *= 10;
	}
	for (i = 0; i < b - c; i++)
	{
		bb *= 10;
	}
	x = aa * cur;
	y = bb * cur;
	x += cur;
	cout << x << " " << y << endl;

}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
