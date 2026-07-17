#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=6;i++)
{
    for(k=1;k<=7-i;k++)
    {
        printf(" ");
    }
    for(j=1;j<i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}


