#include<stdio.h>

int f_series(int n)
{
    int t1=0,t2=1,next_term,i;
    printf("\nFibonacci Series : ");                 
    for(i=0;i<n;i++)
    {
        printf("%d  ",t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
    
    return 0;
}



int main()
{
    int n;
    printf("Enter The Number Of Term In Fibonacci Series : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nPlease Enter The Positive Number Of Term : ");              
    }
    else
    {
        f_series(n);
    }
}