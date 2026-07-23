#include<stdio.h>
int main()
{
int m=21,u,c; // m = matchstick u = user c = computer .
printf("\nEnter in Matchstick Game.");
printf("\n------------------------------------");
while(1)
{
u:    
printf("\nUser Pick Number : ");
scanf("%d",&u);
if(u<1 || u>4)
{
    printf("\nPlease Enter 1 To 4.");
    printf("\n------------------------------------");
    goto u;
}
m = m - u;
printf("\nRemain Matchstick : %d",m);
c = 5 - u;
printf("\n\nComputer Pick Number : %d",c);
m = m - c;
printf("\n\nRemain Matchstick : %d",m);
printf("\n------------------------------------");
if(m==1)
{
printf("\nYou Loss The Game.");
break;
    
}
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");
return 0;
}
