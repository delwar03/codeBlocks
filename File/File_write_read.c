#include<stdio.h>


int main() {

    FILE *file;
    file = fopen("test.txt","r");

    char name[100];
    int age;
    char ch;

    if(!file) printf("File doesn't exist!\n");
    else {

        printf("File has been created successfully!\n");

        /*
        ///For Writing on File :
        printf("Enter your name : ");
        gets(name);
        printf("Enter your age : ");
        scanf("%d", &age);

        fprintf(file,"Name -> %s, Age -> %d\n", name, age);
        */


        /*
        ///For Reading from File :
        while(!feof(file)) {
            ch = getc(file);
            printf("%c", ch);
        }
        */

        printf("File has been written successfully!!\n");
        fclose(file);
    }


    return 0;
}

