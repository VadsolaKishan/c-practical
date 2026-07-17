#include<stdio.h>
int main()
{
long long total=1441981744,TW,TM,TWL,TML,TL,TMIL,TWIL;
TW=total*(48.4/100);
printf("\nTotal women : %lld",TW);
TM=total-TW;
printf("\nTotal men : %lld",TM);
TL=total*(85.95/100);
printf("\nTotal literacy : %lld",TL);
TWL=TW*(62.84/100);
printf("\nTotal women literacy : %lld",TWL);
TML=TM*(80.95/100);
printf("\nTotal men literacy : %lld",TML);
TWIL=TW-TWL;
printf("\nTotal women iliteracy : %lld",TWIL);
TMIL=TM-TML;
printf("\nTotal men ilteracy : %lld",TMIL);

printf("\n\nName : Vadsola Kishan Dhirubhai");
printf("\nId : 24CE134");

return 0;
}
