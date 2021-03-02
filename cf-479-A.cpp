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
ll t,n,i,j,k,a,b,c,d,p,q,r,x,y,z,m,cnt,flag,ans;
string s,s1,s2;
void nahid()
{
  cin>>a>>b>>c;
  if(a!=1 && b!=1 && c!=1)
  	cout<<a*b*c<<endl;
  else
  {
  	if(a==1 && b==1 && c==1)
  		cout<<a+b+c<<endl;
  	else if (a==1 && b==1 && c!=1)
  		cout<<(a+b)*c<<endl;
  	else if (a==1 && b!=1 && c==1)
  		cout<<a+b+c<<endl;
  	else if (a!=1 && b==1 && c==1)
  		cout<<a*(b+c)<<endl;
  	else if (a==1 && b!=1 && c!=1)
  	    cout<<(a+b)*c<<endl;
  	else if ((a!=1 && b==1 && c!=1) && (a!=c))
  	{
  		x=min(a,c);
  		if(a==x)
  		{
  			cout<<(a+b)*c<<endl;
  		}
  		else 
  			cout<<a*(b+c)<<endl;
  	}
  	else if ((a!=1 && b==1 && c!=1) && (a==c))
  		cout<<(a+b)*c<<endl;
  	else if (a!=1 && b!=1 && c==1)
  		cout<<a*(b+c)<<endl;


  }

}
int main()
{ MN7 //cin>>t;while(t--)
  nahid();
}
