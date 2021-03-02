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
ll t, n, i, j, k, a, b, d, p, q, r, w, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
void nahid()
{
	cin >> a >> b;
	cin >> s;

	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == 'L')

		{
			if (a < 0)
				a++;
		}
		else if (s[i] == 'R')
		{	if (a > 0)
				a--;
		}
		if (s[i] == 'U')
		{	if (b > 0)
				b--;
		}
		else if (s[i] == 'D')
		{
			if (b < 0)
				b++;
		}

	}
	if (a == 0 && b == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
