// Online C compiler to run C program online
#include <stdio.h>

int call(int x, int y) {
    if(x < 0 || y > 5) return 0;
    call(x--,y++);
    printf("%d %d", x, y);
    return x;
}

int main() {
    // Write C code here
    int n = call(2,3);
    printf("%d ", n);
    return 0;
}
