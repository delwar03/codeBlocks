#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int b2d(char s[]) {
    int ans = 0, x = 1;
    for(int i = 7; i >= 0; i--) ans += (s[i] - '0') * x, x *= 2;

    return ans;
}

void d2b(int n) {
    char s[9] = "00000000";
    int j = 7;
    while(n) {
        s[j] = (n&1) + '0';
        n >>= 1;
        j--;
    }
    printf("%s", s);
}

int main()
{
    //i/p: 192.168.1.5/17
    //o/p: 11000000 10101000 0000001 00000101
    //     255.255.128.0

    int a, b, c, d, e;
    scanf("%d.%d.%d.%d/%d", &a, &b, &c, &d, &e);


    d2b(a); printf(" ");
    d2b(b); printf(" ");
    d2b(c); printf(" ");
    d2b(d); printf("\n");


    char Subnet[33];
    for(int i = 0; i < e; i++) Subnet[i] = '1';
    for(int i = e; i < 32; i++) Subnet[i] = '0';
    Subnet[32] = '\0';

    char p[9], q[9], r[9], s[9];
    int i = 0, j = 0;
    for(i; i < 8; i++) p[j++] = Subnet[i];
    j = 0;
    for(i; i < 16; i++) q[j++] = Subnet[i];
    j = 0;
    for(i; i < 24; i++) r[j++] = Subnet[i];
    j = 0;
    for(i; i < 32; i++) s[j++] = Subnet[i];
    p[8] = q[8] = r[8] = s[8] = '\0';

    printf("%d.%d.%d.%d", b2d(p), b2d(q), b2d(r), b2d(s));


    return 0;
}












