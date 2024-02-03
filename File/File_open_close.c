#include<stdio.h>


int main() {

    FILE *file;
    file = fopen("test.txt","w");

    if(!file) printf("File doesn't exist!");
    else {
        printf("File has been created succesfully!");
        fclose(file);
    }


    return 0;
}
