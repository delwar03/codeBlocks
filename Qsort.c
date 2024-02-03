#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return (x-y);
}

int main() {
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);// cmp: returns >0 if x should go after y
                                  //      returns =0 if x should stay on its place
                                  //      returns <0 if x should go before y

    printf("Sorted array is: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);

}
