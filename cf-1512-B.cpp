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

	cin >> n;
	vector<char>v(n * n);
	vector<int>v1(2);
	for (i = 0; i < n * n; i++)
	{
		cin >> v[i];
	}

	for (j = 0; j < 2;)
	{
		for (i = 0; i < n * n; i++)
		{

			if (v[i] == '*')
			{
				v1[j++] = i;

			}
		}
	}
	a = v1[0] % n;
	b = v1[1] % n;
	x = a - b;
	if (x > 0)
	{
		v[v1[0] - x] = '*';
		v[v1[1] + x] = '*';
	}
	else if (x < 0)
	{
		if ((v1[0] + abs(x)) == v1[1])
		{
			if (v1[0] <= n - 1)
			{
				v[v1[0] + n] = '*';
			}
			else
			{
				v[v1[0] - n] = '*';
			}
		}
		else
		{
			v[v1[0] + abs(x)] = '*';

		}
		if ((v1[1] - abs(x)) == v1[0])
		{
			if (v1[1] <= n - 1)
				v[v1[1] + n] = '*';
			else
				v[v1[1] - n] = '*';
		}
		else
		{
			v[v1[1] - abs(x)] = '*';
		}
	}
	else
	{
		if (a == n - 1 && b == n - 1)
		{
			v[v1[0] - 1] = '*';
			v[v1[1] - 1] = '*';

		}
		else
		{
			v[v1[0] + 1] = '*';
			v[v1[1] + 1] = '*';
		}


	}
	for (i = 0; i < n * n; i++)
	{
		cout << v[i];
		if (i % n == n - 1)
			cout << '\n';
	}




}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
