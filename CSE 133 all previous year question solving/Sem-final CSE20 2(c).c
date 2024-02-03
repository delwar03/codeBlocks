#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int call;

void magic2021() {
    printf("Call#%2d\n", ++call);
    static a, b = 10;
    int c = a = 9;
    for(int i = 0; i < 5; i++, a += 10 * call, b += 10, c += 10) {
        printf("i = %d, a = %d, b = %d, c = %d\n", i, a, b, c);
    }
    return;
}

int main() {
    magic2021(); magic2021();
}
