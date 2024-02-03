#include <stdio.h>
#include <string.h>
#define ll unsigned long long

int main() {
    ll x; scanf("%llu", &x);
    ll ans = 0, i = 1;
    while(x) {
        ans += (x % 10) * i;
        i *= 8;
        x /= 10;
    }
    printf("%llu", ans);
}


