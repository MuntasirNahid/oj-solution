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
ll t, n, i, j, k, b, d, p, q, r, z, m, cnt, flag, ans;
float x,y,f;
string s, s1, s2;
void nahid()
{
	cin >> n >> m;
	vector<ll>v;
	vector<ll>v1(n);
	
	for (i = 0; i < n; i++)
	{
		cin >> k;
		v.pb(k);

	}
	sort(v.begin(), v.end());
	for (i = 0; i < n -1; i++)
	{
		v1[i] = v[i + 1] - v[i];
	}
	 x = *max_element(v1.begin(), v1.end());
     y=max(v[0]-0,m-v[n-1]);
     f=max(x/2,y);

	printf("%.10f\n",f);


}
int main()
{	MN7// cin>>t;while(t--)
	nahid();
}
