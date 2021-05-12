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
ll t, n, i, j, k, a, b, c, d, p, q, r, x, y, z, m, cnt, flag, ans,u,v,w;
string s;
void nahid()
{
 cin>>n;
 cin>>s;
 if(n<3)
 	cout<<"yEs"<<endl;
 else
 {
 	flag=0;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(s[i]!=s[j])
 			{
 				for(k=j+1;k<n;k++)
 				{
 					if(s[i]==s[k])
 					{
 						flag=1;
 						break;
 					}

 				}

 			}
 		}
 	}

 	if(flag)cout<<"nO"<<endl;
 	else
 		cout<<"yEs"<<endl;
 }
}
int main()
{	MN7 cin>>t;while(t--)
	nahid();
}
