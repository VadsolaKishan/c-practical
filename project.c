#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generatePassword(int length, int useUpper, int useLower, int useDigits, int useSpecial);

int main() 
{
    int length, useUpper, useLower, useDigits, useSpecial;

    srand(time(NULL));  /*The srand() function in C is used to initialize the random number generator with a seed value.*/

    printf("Enter the desired password length : ");
    scanf("%d", &length);

    printf("\nUse uppercase letters ? (1 for Yes , 0 for No) : ");
    scanf("%d", &useUpper);

    printf("\nUse lowercase letters ? (1 for Yes , 0 for No) : ");
    scanf("%d", &useLower);

    printf("\nUse digits ? (1 for Yes , 0 for No) : ");
    scanf("%d", &useDigits);

    printf("\nUse special characters ? (1 for Yes , 0 for No) : ");
    scanf("%d", &useSpecial);

generatePassword(length, useUpper, useLower, useDigits, useSpecial);
 
return 0;
}

void generatePassword(int length, int useUpper, int useLower, int useDigits, int useSpecial)

{
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    
    char digits[] = "0123456789";
    
    char special[] = "!@#$%^&*()_+-=<>?";
    
    char allChars[100] = "";
    
    if (useUpper) 
    {
        strcat(allChars, upper);  /*The strcat() function in C is used to join two strings together, or concatenate them.*/
    }
    
    if (useLower) 
    {
        strcat(allChars, lower);
    }
    
    if (useDigits) 
    {
        strcat(allChars, digits);
    }
    
    if (useSpecial) 
    {
        strcat(allChars, special);
    }
    
    int allCharsLength = strlen(allChars);  /*The strlen() function is used to determine the length of a string, excluding the null character at the end: */ 

    if (allCharsLength == 0) 
        {
            printf("No character sets selected!\n");
            return ;
        }

    printf("\nGenerated Password : ");
    
    for (int i = 0; i < length; i++)
        {
            printf("%c", allChars[rand() % allCharsLength]);
        }
    printf("\n");
}