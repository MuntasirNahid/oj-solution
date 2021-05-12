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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, flag2, ans, u, v, w;
string s;
bool prime[100000 + 1];

void Sieve()
{

	ll n = 100000;
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
			{
				prime[i] = false;
			}
		}
	}

}

void nahid()
{

	cin >> n;

	for (i = n + 1; 1; i++)
	{
		if (prime[i])
		{
			x = i;
			break;
		}
	}
	for (i = x + n; 1; i++)
	{
		if (prime[i])
		{
			y = i;
			break;
		}
	}

	cout << x*y << endl;
}
int main()
{	MN7
	Sieve();
	cin >> t; while (t--)
		nahid();
}
