#include<stdio.h>
int main()
{
float n1,n2,a,s,m,d;
int no;
printf("\nEnter a number : ");
scanf("%f",&n1);
printf("\nEnter a number : ");
scanf(" %f",&n2);
a = n1 + n2;
s = n1 - n2;
m = n1 * n2;
d = n1 / n2;
while(1)
{
   printf("\nEnter Your Choise a Operation : ");
   scanf(" %d",&no);
   if(no==0)
   {
      printf("\nExit...");
      break;
   }
switch(no)
{
case 1:
printf("\naddition : %.2f\n",a);
break;

case 2:
printf("\nsubstration : %.2f\n",s);            
break;

case 3:
printf("\nmultiplication : %.2f\n",m);
break;

case 4:
printf("\ndivision : %.2f\n",d);
break;


default:
printf("\ninvalid no.");
break;
}
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}