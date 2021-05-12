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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, cnt1, cnt2, flag1, flag2, ans, u, v, w;
string s;
void nahid()
{
	cin >> n;
	cin >> s;
	cnt = 0; cnt1 = 0; cnt2 = 0; flag1 = 1; flag2 = 1;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'T')
			cnt1++;
		else
		{
			if (cnt1 > 0)
				cnt1--;
			else
				flag1 = 0;
		}

	}
	for (i = n - 1; i >= 0; i--)
	{
		if (s[i] == 'T')
			cnt2++;
		else
		{
			if (cnt2 > 0)
				cnt2--;
			else
				flag2 = 0;
		}

	}
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'M')
			cnt++;
	}
	if (flag1 && flag2 && n / 3 == cnt)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
