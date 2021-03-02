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
	a = 0; b = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (x % 2)a++;
		else b++;
	}
	cnt = a + 2 * b;
	if (cnt % 2)cout << "nO" << endl;
	else if ( (cnt / 2) % 2 && a == 0)
		cout << "nO" << endl;
	else
		cout << "YEs" << endl;


}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
