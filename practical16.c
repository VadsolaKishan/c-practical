#include<stdio.h>
int main()
{
int i,j,temp,n;
printf("Enter The Number : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter The Element : ");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }k
    }
printf("\t%d",arr[i]);
}

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}
