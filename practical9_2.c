#include<stdio.h>
int main()
{
int Physics,Maths,Chemistry,T,Percentage,x;
printf("Enter The Physics Mark : ");
scanf("%d",&Physics);
printf("Enter The Maths Mark : ");
scanf("%d",&Maths);
printf("Enter The Chemistry Mark : ");
scanf("%d",&Chemistry);
T = Physics + Maths + Chemistry;
Percentage = (T * 100) / 300;
printf("------------------------------------");
printf("\n12^th Percentage : %d",Percentage);
x = Percentage/10;
switch(x)
{
case 10:
printf("\nYour Get The Medal A+.");
break;

case 9:
printf("\nYour Get The Medal A.");
break;

case 8:
printf("\nYour Get The Medal B.");
break;

case 7:
printf("\nYour Get The Medal C.");
break;

case 6:
printf("\nYour Get The Medal D.");
break;

case 5:
printf("\nYour Get The Medal F.");
break;

default:
printf("\nYou Are Fail.");
break;
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");
return 0;
}
