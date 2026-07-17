#include<stdio.h>
#include<string.h>

int main()
{
    struct Book_Detail
    {
        char book_tital[50];
        char author_name[50];
        int amount;
    };
    struct Book_Detail a;

    strcpy(a.book_tital,"Mahabharat");
    strcpy(a.author_name,"Ved Vyas");
    a.amount = 500;

    printf("\n%s",a.book_tital);
    printf("\n%s",a.author_name);
    printf("\n%d",a.amount);
    
    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
    
    return 0;
}












