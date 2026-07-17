#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *ptr;
    ptr=(char*)calloc(10,sizeof(char));
    printf("\nEnter The String : ");
    scanf("%[^\n]s",ptr);
    printf("\nBefore Reallocation : ");
    puts(ptr);

    ptr = (char*)realloc(ptr,20*sizeof(char));
    printf("\nEnter New String After Reallocation Memory : ");       
    scanf(" %[^\n]s",ptr);
    printf("\nNew String After Reallocation : ");
    puts(ptr);

    pprintf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
 
    free(ptr);
    return 0;
}









