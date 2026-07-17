

#include<stdio.h>

float total(float marks[],int n)
{
    float total;
    for(int i=0;i<n;i++)
        {
             total += marks[i];
        }
    printf("\nTotal Mark : %.2f",total);
    return total;
}

float avg_mark(float total_mark,int n)
{
    float avg;
    avg = total_mark/n;
    printf("\nAverage Mark : %.2f",avg);
    return 0;
}

float max_mark(float marks[],int n)
{
    float max = marks[0];
    for(int i=0;i<n;i++)
    {
        if(max<marks[i])
        {
            max = marks[i];
        }
    }
    printf("\nHighest Mark : %.2f",max);
    return 0;
}

float min_mark(float marks[],int n)
{
    float min = marks[0];
    for(int i=0;i<n;i++)
    {
        if(min>marks[i])
        {
            min = marks[i];
        }
    }
    printf("\nLowest Mark : %.2f",min);

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134"); 
    
    return 0;
}




int main()
{
    int n;
    float total_mark;
    printf("Enter The Number Of student : ");
    scanf("%d",&n);
    float marks[n];
    printf("\nEnter The CCP Marks Of The Students :\n ");
    for(int i=0;i<n;i++)
    {
    printf("\nStudent %d : ",i+1);    
    scanf("%f",&marks[i]);
    }
    total_mark = total(marks,n);
    avg_mark(total_mark,n);
    max_mark(marks,n);
    min_mark(marks,n);
}
