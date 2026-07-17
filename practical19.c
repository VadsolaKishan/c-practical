#include <stdio.h>

int main() {
    char note1[100], note2[100];
    int choice, i, j, len1, len2;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enter Note 1\n");
        printf("2. Enter Note 2\n");
        printf("3. Calculate Length of Note 1\n");
        printf("4. Reverse Note 1\n");
        printf("5. Compare Notes\n");
        printf("6. Copy Note 2 to Note 1\n");
        printf("7. Concatenate Notes 1 and 2\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Note 1: ");
                scanf("%s", note1);
                break;
            case 2:
                printf("Enter Note 2: ");
                scanf("%s", note2);
                break;
            case 3:
                len1 = 0;
                for (i = 0; note1[i] != '\0'; i++) {
                    len1++;
                }
                printf("Length of Note 1: %d\n", len1);
                break;
            case 4:
                len1 = 0;
                for (i = 0; note1[i] != '\0'; i++) {
                    len1++;
                }
                for (i = 0, j = len1 - 1; i < j; i++, j--) {
                    char temp = note1[i];
                    note1[i] = note1[j];
                    note1[j] = temp;
                }
                printf("Reversed Note 1: %s\n", note1);
                break;
            case 5:
                len1 = 0;
                len2 = 0;
                for (i = 0; note1[i] != '\0'; i++) {
                    len1++;
                }
                for (i = 0; note2[i] != '\0'; i++) {
                    len2++;
                }
                if (len1 == len2) {
                    for (i = 0; i < len1; i++) {
                        if (note1[i] != note2[i]) {
                            printf("Notes are not equal\n");
                            break;
                        }
                    }
                    if (i == len1) {
                        printf("Notes are equal\n");
                    }
                } else {
                    printf("Notes are not equal (different lengths)\n");
                }
                break;
            case 6:
                len2 = 0;
                for (i = 0; note2[i] != '\0'; i++) {
                    len2++;
                }
                for (i = 0; i < len2; i++) {
                    note1[i] = note2[i];
                }
                note1[len2] = '\0';
                printf("Note 2 copied to Note 1: %s\n", note1);
                break;
            case 7:
                len1 = 0;
                len2 = 0;
                for (i = 0; note1[i] != '\0'; i++) {
                    len1++;
                }
                for (i = 0; note2[i] != '\0'; i++) {
                    len2++;
                }
                for (i = 0; i < len2; i++) {
                    note1[len1 + i] = note2[i];
                }
                note1[len1 + len2] = '\0';
                printf("Concatenated Notes: %s\n", note1);
                break;
            case 8:
                printf("\n\nName : Vadsola Kishan Dhirubhai");
                printf("\nId : 24CE134");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
return 0;
}
