#include<stdio.h>


int main() {

    FILE *file;
    file = fopen("Student Details.txt","a");

    char name[100], phone[15];
    int age, num;

    if(!file) printf("File doesn't exist!\n");
    else {

        printf("File has been created successfully!\n");

        printf("Enter number of students : ");
        scanf("%d", &num);
        for(int i = 0; i < num; i++) {

            getchar();
            printf("Enter student's first name : ");
            gets(name);

            printf("Enter student's age : ");
            scanf("%d", &age);

            printf("Enter student's phone number : ");
            scanf("%s", phone);

            fprintf(file,"\t%s\t\t%d\t\t%s\n", name, age, phone);
        }

        printf("File has been written successfully!!\n");
        fclose(file);
    }


    return 0;
}


