#include<stdio.h>
int main()
{
int i,j,k,row,column;
char choise;
char seat[5][10];
for(i=0;i<5;i++)
{
    for(j=0;j<10;j++)
    {
        seat[i][j]= '0';
    }
}
while(1)
{
    u:
printf("\nEnter The Row : (1----5) : ");
scanf("%d",&row);
if(row<1|| row>5)
{
    printf("\nPlease Enter 1 To 5.\n");
    goto u;
}
    w:
printf("\nEnter The Column : (1----10) : ");
scanf("%d",&column);
if(column<1|| column>10)
{
    printf("\nPlease Enter 1 To 10.\n");
    goto w;
}
seat[row-1][column-1] = 'X';
printf("\nSeating Chart : \n\n");

for(i=0;i<5;i++)
{
    for(j=0;j<10;j++)
    {
        printf("%c ",seat[i][j]);
    }
printf("\n");
}
printf("\nAre You Want To Book Other Seat Yes Or No . ");
scanf(" %c",&choise);
if(choise=='N' || choise=='n')
{
    break;
}
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}                                                                         