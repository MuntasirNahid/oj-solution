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
bool spal(char ch)
{
	return (ch == 'b' || ch == 'd' || ch == 'p' || ch == 'q' || ch == 'o' || ch == 'x' || ch == 'v' || ch == 'w' || ch == 'U' || ch == 'I' || ch == 'A' || ch == 'H' || ch == 'M' || ch == 'O' || ch == 'T' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y');
}
void nahid()
{
	cin >> s;
	x = s.size();
	for (i = 0; i < x; i++)
	{
		if (!spal(s[i]))
			flag = 1;
	}
	if (flag)
	{
		cout << "NIE" << endl;
		return;
	}
	else
	{
		n = x / 2;
		if (x % 2)
		{
			if (s[n] == 'b' || s[n] == 'd' || s[n] == 'p' || s[n] == 'q')
			{
				cout << "NIE" << endl;
				return;
			}
			else
			{
				for (i = 0, j = x - 1; i<n, j>n; i++, j--)
				{
					if (s[i] == 'U' && s[j] == 'U')flag += 0;
					else if (s[i] == 'I' && s[j] == 'I')flag += 0;
					else if (s[i] == 'A' && s[j] == 'A')flag += 0;
					else if (s[i] == 'H' && s[j] == 'H')flag += 0;
					else if (s[i] == 'M' && s[j] == 'M')flag += 0;
					else if (s[i] == 'O' && s[j] == 'O')flag += 0;
					else if (s[i] == 'T' && s[j] == 'T')flag += 0;
					else if (s[i] == 'V' && s[j] == 'V')flag += 0;
					else if (s[i] == 'W' && s[j] == 'W')flag += 0;
					else if (s[i] == 'X' && s[j] == 'X')flag += 0;
					else if (s[i] == 'Y' && s[j] == 'Y')flag += 0;
					else if (s[i] == 'b' && s[j] == 'd')flag += 0;
					else if (s[i] == 'd' && s[j] == 'b')flag += 0;
					else if (s[i] == 'p' && s[j] == 'q')flag += 0;
					else if (s[i] == 'q' && s[j] == 'p')flag += 0;
					else if (s[i] == 'o' && s[j] == 'o')flag += 0;
					else if (s[i] == 'x' && s[j] == 'x')flag += 0;
					else if (s[i] == 'v' && s[j] == 'v')flag += 0;
					else if (s[i] == 'w' && s[j] == 'w')flag += 0;
					else
						flag += 1;


				}
			}

		}
		else
		{
			for (i = 0, j = x - 1; i<n, j >= n; i++, j--)
			{
				if (s[i] == 'U' && s[j] == 'U')flag += 0;
				else if (s[i] == 'I' && s[j] == 'I')flag += 0;
				else if (s[i] == 'A' && s[j] == 'A')flag += 0;
				else if (s[i] == 'H' && s[j] == 'H')flag += 0;
				else if (s[i] == 'M' && s[j] == 'M')flag += 0;
				else if (s[i] == 'O' && s[j] == 'O')flag += 0;
				else if (s[i] == 'T' && s[j] == 'T')flag += 0;
				else if (s[i] == 'V' && s[j] == 'V')flag += 0;
				else if (s[i] == 'W' && s[j] == 'W')flag += 0;
				else if (s[i] == 'X' && s[j] == 'X')flag += 0;
				else if (s[i] == 'Y' && s[j] == 'Y')flag += 0;
				else if (s[i] == 'b' && s[j] == 'd')flag += 0;
				else if (s[i] == 'd' && s[j] == 'b')flag += 0;
				else if (s[i] == 'p' && s[j] == 'q')flag += 0;
				else if (s[i] == 'q' && s[j] == 'p')flag += 0;
				else if (s[i] == 'o' && s[j] == 'o')flag += 0;
				else if (s[i] == 'x' && s[j] == 'x')flag += 0;
				else if (s[i] == 'v' && s[j] == 'v')flag += 0;
				else if (s[i] == 'w' && s[j] == 'w')flag += 0;
				else
					flag += 1;


			}
		}
		if (flag)cout << "NIE" << endl;
		else
			cout << "TAK" << endl;
	}



}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
