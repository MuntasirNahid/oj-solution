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
{
	cin >> n;
	vector<int>v, v1;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		v.pb(k);
	}
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> k;
		v1.pb(k);
	}
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (abs(v[i] - v1[j]) <= 1)
			{
				ans++;
				v1[j] = 10000;
				break;
			}

		}
	}
	cout << ans << endl;

}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
