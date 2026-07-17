#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *fp;
    char word[100];

    fp = fopen("Demo.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        int len = strlen(word);
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }
        printf(" ");
    }
    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");

    fclose(fp);
    
    return 0;
}