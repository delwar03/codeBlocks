#include <stdio.h>
#include <string.h>

void chadrat(int n) {
    int val = 0;
    for(int i = 1; i <= n; i++) {

        for(int sp = 1; sp <= n - i; sp++) printf(" ");


        int temp = val;
        for(int j = 1; j <= 2 * i - 1; j++) {
            if(j <= i){
                ++temp;
                printf("%d", temp % 10);

            }
            else {
                temp--;
                printf("%d", temp % 10);
            }
        }
        printf("\n");
        val++;
    }
}

int main()
{
    /// your code goes here
    int n; scanf("%d", &n);
   chadrat(n);

    return 0;
}

/*       1
        232
       34543
      4567654*/
