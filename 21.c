#include <stdio.h>
#include <math.h>

#include <stdbool.h>
int main () {
    //n faktorial
    double n=10,f=1, summ=0;
    for(double i=1; i<=n; i++) {
        f=f*i;
        summ=summ+(1/f);
       printf("1/%0.1lf! + ",i);
    }
    printf("= %0.5lf\n",(1+summ));
    return 0;
} 
