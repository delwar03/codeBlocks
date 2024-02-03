#include<stdio.h>

double func(double n) {
    double l = 0.0, r = n, eps = 0.00001;
    double mid = (l + r) / 2.0;

    while (fabs(mid * mid - n) > eps) {
        if (mid * mid > n) {
            r = mid;
        }
        else {
            l = mid;
        }
        mid = (l + r) / 2.0;
    }
    return mid;
}
          int main()
          {
            double n; scanf("%lf", &n);
            printf("%lf", func(n));
          }
