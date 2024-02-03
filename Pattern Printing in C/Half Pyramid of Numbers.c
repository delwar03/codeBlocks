#include<stdio.h>
#include<conio.h>

int main() {
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}


/*
i/p: 5
o/p: 1
     12
     123
     1234
     12345
*/
