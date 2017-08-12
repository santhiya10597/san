#include<stdio.h>
int main()
{
double no;
printf("enter the number");
scanf("%lf",&no);
if(no<0.0)
printf("entered no is negative no");
else if(no>0.0)
printf("entered no is positive no");
else
printf("enterde no is zero");
return 0;
}
