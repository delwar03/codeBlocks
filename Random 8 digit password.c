#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateotp() {
    int arr[8];
    arr[0] = rand() % 9 + 1;
    for(int i = 1; i < 8; i++) {
    srand(time(0));
    int k = rand() % 9 + 1; // 1 to 9

    if(k == arr[i - 1]) k = (k + 1) % 10;
    arr[i] = k;
    }
    for(int i = 0; i < 8; i++) printf("%d", arr[i]);
}
int main() {
    generateotp();
}
