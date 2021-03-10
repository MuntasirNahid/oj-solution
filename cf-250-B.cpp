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
int main()
{	MN7
	int t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans, colon;
char s[45], save[5], ch;
string str;

	cin >> t>>ch;
	while (t--)
	{
		cin>>str;
		cnt = i = 0;
	for(j=0;j!='\n';i++)
		{
			s[i++] = str[j];
			if (str[j] == ':')cnt++;

		}
		s[i] = '\0';
		cnt = 8 - cnt;
		for (j = 0; s[j]; j++)
		{

			if (s[j] == ':' && s[j + 1] == ':')
			{
				if (j == 0)cout << "0000";

					while (cnt--)
					{
						cout << ":0000";
					}
				
			}
			else
			{
				k = 0;
				if (j != 0)cout << ":";
				if (s[j] == ':')j++;

				while (s[j])
				{
					 save[k] = s[j];
						k++;
					if (s[j+1] == ':')break;
					j++;
				}
				save[k] = '\0';
				k = 4 - k;
				while (k--)
				{
					cout << "0";
				}
				printf("%s", save);
				if (j == i)break;

			}
		}
		cout<<endl;

	}
}
