
int main()
{
int Num[25];
int Poss = 0,Neg = 0,Odd = 0,Even = 0;
int i = 0;
for(i=0;i<25;i++)
{
    printf("Enter The Number : ");
    scanf("%d",&Num[i]);
    if(Num[i]%2==0)
        Even++;
    else
        Odd++;
    if(Num[i]>0)
        Poss++;
    else
        Neg++;
}
printf("\nPossitive Number : %d",Poss);
printf("\nNegative Number : %d",Neg);
printf("\nEven Number : %d",Even);
printf("\nOdd Number : %d",Odd);

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}

