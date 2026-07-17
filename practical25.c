#include<stdio.h>
#include<string.h>

    union library
    {
        char book_name[15];
        char author_name[15];
        int acc_num;
        int book_price;
        int flag;
    }b;

    int main()
    {
        printf("\nEnter Accession Number : ");
        scanf("%d",&b.acc_num);
        printf("Accession Number : %d",b.acc_num);

        printf("\n\nEnter Book Name : ");
        scanf(" %[^\n]s",b.book_name);
        printf("Book Name : %s",b.book_name);

        printf("\n\nEnter Author Name : ");
        scanf(" %[^\n]s",b.author_name);
        printf("Author Name : %s",b.author_name);

        printf("\n\nEnter Book Price : ");
        scanf("%d",&b.book_price);
        printf("Book Price : %d",b.book_price);

        printf("\n\nIs The Book Issued (1 for Yes or 0 for No) ? : ");                  
        scanf("%d",&b.flag);
        printf("Issued : %s\n",b.flag ? "Yes" : "No");
        
        printf("\n\nName : Vadsola Kishan Dhirubhai");
        printf("\nId : 24CE134");

        return 0;
    }

