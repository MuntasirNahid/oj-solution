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
	cin >> n >> m;
	list<int>v;
	list<int> :: iterator it;
	for (i = 1; i <= n; i++)
	{
		cin >> k;
		v.pb(k);

	}

	for (i = 0; i < m; i++)
	{
		cin >> q;
		it = find(v.begin(), v.end(), q);
		//x = it - v.begin();
		cout << distance(v.begin(), it) + 1 << " ";
		// v.insert(v.begin(), v[x]);
		// auto iit = find(v.begin() + 1, v.end(), ser);
		v.erase(it);
		v.push_front(q);
	}

}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
