/* Your Love Makes Me STRONG,
   Your Hate Makes Me UNSTOPABBLE.
*/
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
using namespace std;
ll t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
void nahid()
{	x = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());
	if (v[0] == v[n - 1])cout << 0 << endl;
	else {
		for (i = 0; i < n - 1; i++)
		{
			if (v[i] != v[i + 1])
			{
				x = i;
				break;
			}
		}
		cout << (n - 1 - x) << endl;

	}
}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
