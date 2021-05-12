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
ll t, n, i, j, k,b, c, d, p, q, r, x, z, m, cnt, flag, ans, u, v, w, left, right, mid;
string s;

void nahid()
{
	 int n,m,i,j,a=1;
 
    scanf("%d %d",&n,&m);
 
    long long int x[n+1],y[m]; x[0]=0;
 
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&x[i]);
        x[i]+=x[i-1];
    }
 
    for(i=0;i<m;i++)
    {
        scanf("%lld",&y[i]);
 
        for(j=a;y[i]>x[j];j++);  a=j;
 
        printf("%d %lld\n",a,y[i]-x[j-1]);
    }


}
int main()
{	MN7 //cin>>t;while(t--)
	nahid();
}
