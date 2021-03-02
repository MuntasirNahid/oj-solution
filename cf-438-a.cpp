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
ll t, n, i, j, k, d, p, q, r, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
void nahid()
{
	cin >> s;
	cin >> n;
	bool a = 0, b = 0;
	while (n--)
	{
		cin >> s1;
		if (s1 == s)
		{
			flag = 1;
		}
		else
		{	if (s1[0] == s[1])a = 1;
			if (s1[1] == s[0])b = 1;
		}
	}
	if (flag || (a && b))cout << "YES" << endl;
	else cout << "NO" << endl;


}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
