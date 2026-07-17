#include<stdio.h>
#include <string.h>

int main()
{
char names[10][20],temp[10];
int i,j,k=1;
for(i=0;i<5;i++)
  {
     printf("Student Name : ");
     scanf("%s",&names[i]);
  }
printf("\n");

for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
         if(strcmp(names[i],names[j])>0)
         {
             strcpy(temp,names[i]);
             strcpy(names[i],names[j]);
             strcpy(names[j],temp);
         }
    }
}
printf("\n");
for(i=0;i<5;i++)
{
    printf("%s\n",names[i]);
}

printf("\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}                                                                                     