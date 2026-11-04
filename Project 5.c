#include <stdio.h>
void main()
{
    FILE *fp;
    char name[300];


    // 1. Writing data into file
    fp = fopen("feedback.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    fprintf(fp, "I like c programming classes but the c programming classes were not that much informative and helpful to me I could not learned some concepts our trainer keep changing every class");

    fclose(fp);

    printf("Data written successfully\n");


    // 2. Appending data into file
    fp = fopen("feedback.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    fprintf(fp, "\nAfter aravindh sir joined our class The classes are helpful to me I learned many conpects clearly I understand each concept clearly Our new trainer is surely better than previous trainer");

    fclose(fp);

    printf("Data appended successfully\n");


    // 3. Reading data from file
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("\nFile Contents:\n");

    while (fgets(name, sizeof(name), fp) != NULL)
    {
        printf("%s", name);
    }

    fclose(fp);
}
}
