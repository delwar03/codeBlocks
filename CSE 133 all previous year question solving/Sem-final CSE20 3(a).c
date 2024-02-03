#include <stdio.h>

int main()
{
    int x, y, z[20] = {3,2,9,6,4,1,7,3,8}, *a, *b, *c;
    a = b = c = z + 2;
    *c += *a + *(z + 3);
    x = *(b + 2) + *(c + 3) - 1;
    a = &x; y = x + *z;
    b++; c += 4; *(b + 9) = y - x;
    *(c - 1) = *c + *b - *(z + 9);
    *(z + 6) = ++(*a);
    if(b++ < --c) *(z + 14) = x + y;
    for(int i = 0; i < 5; i++)
        printf("z[%d] = %02d, z[%d] = %02d, z[%d] = %02d\n", i, *(z + i), i + 5, *(z + i + 5), i + 10, *(z + i + 10));
    printf("x = %02d, y = %02d, *a = %02d, *b = %02d, *c = %02d\n", x, y, *a, *b, *c);
    return 0;
}
