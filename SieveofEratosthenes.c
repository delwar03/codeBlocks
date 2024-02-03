#include<stdio.h>
int sieve[100005];

int main() {
    sieve[0] = sieve[1] = 1;
    for(int i = 2; i*i <= 100005; i++) {
        if(!sieve[i]) {
            for(int j = i*i; j <= 100005; j+=i) {
                sieve[j] = 1;
            }
        }
    }

    int n;
    printf("Enter the number in which range you want to see primes : ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        if(!sieve[i]) printf("%d\n", i);
    }
    return 0;
}

//TC -> O(nloglogn)

