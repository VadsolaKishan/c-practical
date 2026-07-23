#include<stdio.h>
int main()
{
    int i,j,k,l,n,a;

    printf("Enter The Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        a = i -1;
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%c",a+64);
            a--;
        }
        printf("\n");
    }
    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
    return 0;
}



