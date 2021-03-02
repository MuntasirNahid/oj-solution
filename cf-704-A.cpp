#include <bits/stdc++.h>
using namespace std;
#define  ll long long 
 
void nahid() {
    ll p, a, b, c;
    scanf("%lld%lld%lld%lld", &p, &a, &b, &c);
    printf("%lld\n", min((a - p % a) % a, min((b - p % b) % b, (c - p % c) % c)));
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T --) nahid();
    
}