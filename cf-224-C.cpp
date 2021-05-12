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
string s;
const int MAXN = 100009;
stack <int> st;
bool vis[MAXN];

void nahid()
{
	cin>>s;
	memset(vis, 0, sizeof(vis));
	int len = s.size();
	for (int i = 0; i < len; ++i)
	 {
		if (s[i] == '(' || s[i] == '[') st.push(i);
		else {
			if (st.empty()) continue;
			if ((s[st.top()] == '(' && s[i] == ')') || (s[st.top()] == '[' && s[i] == ']')) {
				vis[i] = 1;
				vis[st.top()] = 1;
				st.pop();
			}
			else {
				while (!st.empty()) st.pop();
			}
		}
	}
	int ans = 0, lef, rig;
	for (int i = 0; i < len; ++i) {
		if (!vis[i]) continue;
		int j = i, tmp = 0;
		while (j < len && vis[j]) {
			if (s[j] == '[') ++tmp;
			if (tmp >= ans) {
				ans = tmp;
				lef = i;
				rig = j;
			}
			++j;
		}
		i = j - 1;
	}
	cout<<ans<<endl;
	if (ans) {
		for (int i = lef; i <= rig; ++i) cout<<s[i];
	
	}
	
}


int main()
{	MN7 //cin >> t; while (t--)
	nahid();
}
