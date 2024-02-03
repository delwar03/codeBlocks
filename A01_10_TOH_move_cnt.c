#include <stdio.h>
#include <string.h>
#define ll long long

ll po(ll n) {
    ll ans = 1;
    for(int i = 0; i < n; i++) ans *= 2;
    return ans;
}

int main() {
    ll x; scanf("%lld", &x);
    ll ans = po(x) - 1;
    printf("%lld", ans);
}
