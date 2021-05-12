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
ll t, n, i, j, k, a, b, aa, bb, d, p, q, r, y, z, m, cnt, flag, ans, u, v, w;
char c;
string s;
void nahid()
{
	flag = 0;
	p = q = r = 0;
	cin >> a >> b;
	aa = a;
	bb = b;
	n = a + b;
	vector<char>v;
	for (i = 0; i < n; i++)
	{
		cin >> c;
		v.pb(c);
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] == '0' && v[n - 1 - i] == '1')
			flag = 1;
		else if (v[i] == '0' && v[n - 1 - i] == '?')
			v[n - i - 1] = '0';
		else if (v[i] == '1' && v[n - i - 1] == '0')
			flag = 1;
		else if (v[i] == '1' && v[n - i - 1] == '?')
			v[n - i - 1] = '1';
	}
	if (flag)
	{
		cout << -1 << endl;
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] == '0')p++;
		else if (v[i] == '1')q++;
		else r++;
	}
	a -= p;
	b -= q;
	if (n == 1)
	{
		if ((a == 1 && v[0] == '1') || (b == 1 && v[0] == '0'))
		{
			cout << -1 << endl;
			return;
		}
	}
	if (n % 2)
	{
		if (v[n / 2] == '?')
		{
			if (a % 2 == 0 && b % 2 == 0)
			{
				flag = 1;
			}
			if (a % 2 && b % 2)
			{
				flag = 1;
			}

			if (a % 2 && b % 2 == 0)
			{
				v[n / 2] = '0';
				a--;
			}
			else if (a % 2 == 0 &&  b % 2)
			{
				v[(n / 2)] = '1';
				b--;
			}

		}

		if (v[n / 2] == '0')
		{
			if (a % 2)
				flag = 1;

		}
		else if (v[n / 2] == '1')
		{
			if (b % 2)
				flag = 1;
		}


		if (flag)
		{
			cout << -1 << endl;
			return;
		}

	}
	for (i = 0; i < n; i++)
	{
		if (v[i] == '?' && v[n - i - 1] == '?')
		{
			if (a > 1)
			{
				v[i] = '0';
				v[n - i - 1] = '0';
				a -= 2;
			}
			else if (b > 1)
			{
				v[i] = '1';
				v[n - i - 1] = '1';
				b -= 2;
			}
			if (a == 1 && b == 1)
			{
				cout << -1 << endl;
				return;
			}
		}
	}
	p = 0; q = 0;
	for (i = 0; i < n; i++)
	{
		if (v[i] == '0')p++;
		else if (v[i] == '1')q++;

	}

	if (p != aa || q != bb)
	{
		cout << -1 << endl;
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
			cout << v[i];
		cout << '\n';
	}



}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
