#include<stdio.h>
int main()
{
int no,Bill=0,b;
printf("\nWelcome Foodies Restaurant.");
printf("\n1.Burger = 150");
printf("\n2.Pizza = 200");
printf("\n3.Pasta = 120");
printf("\n4.Sandwich = 100");
printf("\n5.French Fries = 80");
printf("\n");
printf("\n-----------------------------");
printf("\n-----------------------------");
printf("\n");
while(1)
{
printf("\nEnter Your Chose Number : ");
scanf("%d",&no);
if(no==0){
printf("\nYour Finish Order.");
printf("\n-----------------------------");  
break;
}
switch(no)
{
case 1:
printf("\nHow Many Burger Is Eat : ");
scanf("%d",&b);
printf("\nYour Order Is %d Burger : ",b);
printf("\n-----------------------------");
Bill += b * 150;
break;

case 2:
printf("\nHow Many Pizza Is Eat : ");
scanf("%d",&b);
printf("\nYour Order Is %d Pizza : ",b);
printf("\n-----------------------------");
Bill += b * 200;
break;

case 3:
printf("\nHow Many Pasta Is Eat : ");
scanf("%d",&b);
printf("\nYour Order Is %d Pasta : ",b);
printf("\n-----------------------------");
Bill += b * 120;
break;

case 4:
printf("\nHow Many Sandwich Is Eat : ");
scanf("%d",&b);
printf("\nYour Order Is %d Sandwich : ",b);
printf("\n-----------------------------");
Bill += b * 100;
break;

case 5:
printf("\nHow Many French Fries Is Eat : ");
scanf("%d",&b);
printf("\nYour Order Is %d French Fries : ",b);
printf("\n-----------------------------");
Bill += b * 80;
break;

default:
printf("\nInvalid No.");
printf("\n-----------------------------");
break;
}
}
printf("\nTotal Bill : %d",Bill);
printf("\n-----------------------------");

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}
