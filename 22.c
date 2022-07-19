#include <stdio.h>
#include <math.h>

#include <stdbool.h>
int main () {
    //n faktorial
    double n=10,f=1,x=7, xd=0,summ=1;
    for(double i=1; i<=n; i++) {
        xd=pow(x,i);
        f=f*i;
        summ+=xd/f; 
        printf("%lf\n",f);
        }
    printf("= %lf",(summ));
    return 0;
} 
