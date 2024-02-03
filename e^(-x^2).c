#include<stdio.h>
#include<math.h>

double fun(double n) {
    return exp(-n*n);
}

int main() {
    double a, b, ans = 0.0; scanf("%lf%lf", &a, &b);
    double x = a, y = b;
    while(a != b) {
        a += 0.00001;
        ans += (fun(a) - fun(x) / 2) * 0.00001;
        x = a;
    }
    printf("%lf", ans);
    return 0;
}

