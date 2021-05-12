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
	if (n == 1 || n % 2)
	{
		cout << "NO" << endl;
		return;
	}
	else
	{

		a = n * 2;
		x = sqrt(a);
		y = sqrt(n);


		if ((!(n & (n - 1))) || x * x == a || y * y == n) //whether its power of 2
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
