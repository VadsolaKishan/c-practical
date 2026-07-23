#include<stdio.h>
int display()
{
    printf("Welcome to CHARUSAT University");
    printf("\n===============================");
    return 0;
}
int student()
{
    int num;
    printf("\nEnter the number of student : ");
    scanf("%d",&num);
    return num;
}
float grade(int stNum)
{
    int i,j;
    float grades[stNum];
    float total;
    float avg;
    for(i=0;i<stNum;i++)
    {
        printf("\nEnter the grade of student %d : ",i+1);
        scanf("%f",&grades[i]);
    }
    for(j=0;j<stNum;j++)
    {
        total +=grades[j];
    }
    avg = total / stNum;
    printf("\nThe average grade of student is : %.2f",avg);

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
     
    return 0;
}

int main()
{
int num;
   display();
   num = student();
   grade(num);      
}
