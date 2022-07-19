#include <stdio.h>
#include <math.h>
int main(void){
//1^k+2^k+...N^k=
double k=3,n=5,summ=0;
for(double i=1; i<=n;i++)
{
summ+=pow(i,k);
}
printf("result: %.1lf\n",summ);
    return 0;
}