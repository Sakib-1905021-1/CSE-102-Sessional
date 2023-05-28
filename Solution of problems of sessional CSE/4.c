#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{

    float unit,bill;
    scanf("%f",&unit);
    if(unit<=50)
        bill=unit*4.0;
    else if(unit>50&&unit<=30)
        bill=(unit-50)*5+50*4.0;
    else if(unit>80&&unit<=100)
        bill=(unit-80)*6+50*4.0+30*5.0;
    else
        bill=(unit-100)*6.5+50*4+30*5+20*6;
    printf("%.2lf",bill);
    return 0;


}
