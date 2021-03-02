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
ll t, n, i, j, k, a, b, d, p, q, r, x, y, u, l, z, m, cnt, flag, ans;
string s, s1, s2;
void nahid()
{
    cin >> t;
    while (t--) {
        cin >> n >> u >> r >> d >> l;
        ll temr = r, teml = l;
        if (u == n && (r == 0 || l == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (u == n)
        {
            r--;
            l--;

        }
        if (u == n - 1 && (r == 0 && l == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (u == n - 1)
        {
            if (r > 0 && r > l)
                r--;
            else
                l--;

        }
        if (d == n && (r == 0 || l == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (d == n)
        {
            r--;
            l--;

        }

        if (d == n - 1 && (r == 0 && l == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (d == n - 1)
        {
            if (r > 0 && r > l)
                r--;
            else
                l--;

        }

        l = teml;
        r = temr;
        if (r == n && (u == 0 || d == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (r == n)
        {
            u--;
            d--;

        }
        if (r == n - 1 && (u == 0 && d == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (r == n - 1)
        {
            if (u > 0 && u > d)
                u--;
            else
                d--;

        }

        if (l == n && (u == 0 || d == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (l == n)
        {
            u--;
            d--;

        }
        if (l == n - 1 && (u == 0 && d == 0))
        {
            cout << "nO" << '\n';
            continue;
        }
        else if (l == n - 1)
        {
            if (u > 0 && u > d)
                u--;
            else
                d--;

        }
        cout << "yEs" << '\n';
    }
}

int main()
{   MN7 //cin >> t; while (t--)
    nahid();
}



