#include<stdio.h>
#include<math.h>

float Triangle(float a,float b,float c)
{
return (a+b>c)&&(b+c>a)&&(c+a>b);
}

float area(float a,float b,float c)
{
    float s,area;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main()
{
    float a,b,c;
    printf("Enter Length Of First Side : ");
    scanf("%f",&a);
    printf("Enter Length Of Second Side : ");
    scanf("%f",&b);
    printf("Enter Length Of Third Side : ");
    scanf("%f",&c);
    if(Triangle(a,b,c))
    {
       float A=area(a,b,c);
       printf("\nTriangle Area : %.2f",A);

    }
    else
    {
        printf("\nGiven Length Is Not Valid From Triangle.");

    }

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
    
    return 0;
}


