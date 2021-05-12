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
	cin >> r >> b >> d;
	if (d == 0)
	{
		if (r == b)
			cout << "yEs" << endl;
		else
			cout << "nO" << endl;
	}
	else
	{
		a = min(r, b);
		x = abs(r - b);
		if (d * a >= x)
			cout << "yEs" << endl;

		else
			cout << "nO" << endl;
	}

}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
