#include<stdio.h>

int ptr(int *marks,int n,int *Distinction,int *First_Class,int *Pass,int *Fail)
{
    for(int i=0;i<n;i++)
    {
        if(*(marks+i)>=70)
        {
           (*Distinction)++;
        }

        else if(*(marks+i)>=60 && *(marks+i)<=69)
        {
            (*First_Class)++;
        }

        else if(*(marks+i)>=40 && *(marks+i)<=59)
        {
            (*Pass)++;
        }

        else
        {
            (*Fail)++;
        }
    }
    printf("\nDISTINCTION : %d",*Distinction);
    printf("\nFIRST_CLASS: %d",*First_Class);
    printf("\nPASS : %d",*Pass);
    printf("\nFAIL: %d",*Fail);

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");   
    return 0;
}


int main()
{
    int n;
    printf("Enter The Number Of Student : ");
    scanf("%d",&n);
    int marks[n],First_Class=0,Distinction=0,Pass=0,Fail=0;
    for(int i=0;i<n;i++)
    {
        printf("Student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    ptr(marks,n,&First_Class,&Distinction,&Pass,&Fail);
}