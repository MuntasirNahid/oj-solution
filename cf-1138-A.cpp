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
	cin >> n; a = 1;
	vector<int>v(n), v1;
	for (i = 0; i < n; i++)
		cin >> v[i];
	for (i = 0; i < n ; i++)
	{
		if (v[i] == v[i + 1])
			a++;
		else
		{
			v1.pb(a);
			a = 1;
		}
	}
	y = v1.size(); ans = 0;
	for (i = 0; i < y - 1; i++)
	{
		x = min(v1[i], v1[i + 1]);
		ans = max(ans, x);
	}
	cout << ans*2 << endl;


}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
