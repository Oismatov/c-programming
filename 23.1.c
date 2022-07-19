#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    //23 mashq
    double x=3, n=3,f=1, summ=0,interpretator1=0;
    for (double i=1; i<=2*n+1; i+=2){
        for(double j=1; j<=i; j++)
        {f=f*j; }
        printf("f= %lf\n",f);
        summ+=(pow(-1,interpretator1))*(pow(x,i))/f;
        printf("%lf\n",summ);
        interpretator1++;
        }
        //printf("%lf\n",summ);
    return 0;
}