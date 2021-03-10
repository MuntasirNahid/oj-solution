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
ll t, n, i, j, a, b, c, d, p, q, r, l, k, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
char temp, temp2, temp3;
void nahid()
{
	cin >> s;
	cin >> n;
	while (n--)
	{
		cin >> l >> r >> k;
		l--;
		k %= (r - l);
		rotate(s.begin()+l,s.begin()+r-k,s.begin()+r);
	}
	cout << s << endl;

}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
