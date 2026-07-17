#include <stdio.h>

int main() {
    FILE *fp;
    int marks[5];
    int i;

    fp = fopen("marks.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        fprintf(fp, "%d\n", marks[i]);
    }

    fclose(fp);

    fp = fopen("marks.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nMarks of students:\n");
    for (i = 0; i < 5; i++) {
        fscanf(fp, "%d", &marks[i]);
        printf("%d\n", marks[i]);
    }

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");

    fclose(fp);
    return 0;
}