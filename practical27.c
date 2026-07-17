#include<stdio.h>

double ptr(double *a,double *b)
{
    double temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("\n\nAfter Swap : ");
    printf("\n\n\nBalance_1 : %.2lf",*a);
    printf("\n\n\nBalance_2 : %.2lf",*b);

    printf("\n\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
    return 0;
}


int main()
{
    double x,y;

    printf("Before Swap : ");

    printf("\n\n\nBalance_1 : ");
    scanf("%lf",&x);

    printf("\n\nBalance_2 : ");
    scanf("%lf",&y);

    ptr(&x,&y);

}
