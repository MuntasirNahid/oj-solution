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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, fl, ans, mx;
string s, s1, s2;
void nahid()
{	a = 0; b = 0; c = 0; cnt = 0;
	cin >> s;
	x = s.size();
	for (i = 0; i < x; i++)
	{
		if (s[i] == 'A')a++;
		else if (s[i] == 'B')b++;
		else c++;
	}
	if (a + b == c)
	{
		cnt = 0; flag = 0; fl = 0;
		for (i = 0; i < x; i++)
		{
			if (s[i] == 'C')cnt++;
			else cnt--;
			if (cnt < 0)flag = 1;
		}
		cnt = 0;
		for (i = 0; i < x; i++)
		{
			if (s[i] == 'C')cnt--;
			else cnt++;
			if (cnt < 0)fl = 1;
		}
		if (flag == 1 && fl == 1)
			cout << "nO" << endl;
		else
			cout << "yEs" << endl;
	}
	else if (a + c == b)
	{
		cnt = 0; flag = 0; fl = 0;
		for (i = 0; i < x; i++) {
			if (s[i] == 'B')cnt++;
			else cnt--;
			if (cnt < 0)flag = 1;
		}
		cnt = 0;
		for (i = 0; i < x; i++) {
			if (s[i] == 'B')cnt--;
			else cnt++;
			if (cnt < 0)fl = 1;
		}
		if (flag == 1 && fl == 1)
			cout << "nO" << endl;
		else
			cout << "yEs" << endl;
	}
	else if (c + b == a)
	{
		cnt = 0; flag = 0; fl = 0;
		for (i = 0; i < x; i++) {
			if (s[i] == 'A')cnt++;
			else cnt--;
			if (cnt < 0)flag = 1;
		}
		cnt = 0;
		for (i = 0; i < x; i++) {
			if (s[i] == 'A')cnt--;
			else cnt++;
			if (cnt < 0)fl = 1;
		}
		if (flag == 1 && fl == 1)
			cout << "nO" << endl;
		else
			cout << "yEs" << endl;
	}
	else
		cout << "nO" << endl;



}

int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
