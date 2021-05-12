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
int t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w;
string s;
int gcd(ll a , ll b)
{
	if (a == 0)return b;
	return gcd(b % a, a);
}
void nahid()
{
	cin >> a >> b;
	cnt = 0;
	x = gcd(a, b);
	for (i = 1; i * i <= x; i++)
	{
		if (i * i == x)cnt++;
		else if ( x % i == 0)cnt+= 2;
	}
	cout << cnt << endl;



}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
