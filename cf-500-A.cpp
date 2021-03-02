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
#define sz 10000000
#define revers(x) reverse(x.begin(),x.end())
using namespace std;
int t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans;
string s, s1, s2;
int v[sz],v1[sz];
	void nahid()
	{
		cin >> n >> t;
		;
		for ( i = 1; i <= n-1; ++i)
		{
			cin>>v[i];
		}
		v1[1] = 1;
		for ( i = 1; i <=n-1 ; i++)
		{
			
			if(v1[i])v1[v[i]+i]=1;
 
		}
	
		if (v1[t])
			cout << "YES" << endl;
		else cout << "NO" << endl;
 
 
 
	}
	int main()
	{	MN7 //cin>>t;while(t--)
		nahid();
	}