#include<stdio.h>

int main() {
    char c1[] = "   ##########";
    char c2[] = "  #        #";
    char c3[] = " #        #";
    char c4[] = "##########";

    char c1n[] = " ##########";
    char c2n[] = " #        #";
    char c3n[] = " #        #";
    char c4n[] = " ##########";

    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        n--;
        printf("%s", c1);
        for(int i = 0; i < n; i++) printf("%s", c1n); puts("");
        printf("%s", c2);
        for(int i = 0; i < n; i++) printf("%s", c2n); puts("");
        printf("%s", c3);
        for(int i = 0; i < n; i++) printf("%s", c3n); puts("");
        printf("%s", c4);
        for(int i = 0; i < n; i++) printf("%s", c4n); puts("");
    }

    return 0;
}
