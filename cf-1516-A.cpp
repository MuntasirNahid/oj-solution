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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans, u, v, w;
string s;
void nahid()
{
	cin >> n >> k;
	vector<int>v(n);
	for (i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	i = 0; j = n - 1;
	while(k--){
        while (v[i] <= 0){ i++; }
        if(j < i) break;
        v[i] -= 1;
        v[j] += 1;
    }
	for (i = 0; i < n; i++)
	{
		cout << v[i] << " \n"[i == n - 1];
	}

}
int main()
{	MN7 cin >> t; while (t--)
		nahid();
}
