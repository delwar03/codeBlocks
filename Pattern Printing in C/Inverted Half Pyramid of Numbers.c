#include<stdio.h>
#include<conio.h>

int main() {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}


/*
i/p: 5
o/p: 12345
     1234
     123
     12
     1
*/


