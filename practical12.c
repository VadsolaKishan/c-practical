#include<stdio.h>
int main()
{
int day;
int total_budget=0,per_day_price = 200;
for(day=1;day<=100;day++)
{
    if(day%2==0)
    {
        total_budget += per_day_price;
    }
}
printf("total_budget : %d",total_budget);

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}

