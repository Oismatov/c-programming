#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    double a=13400, n;
    for(double i=1; i<=2; i=i+0.1){
        n=i*a;
        printf("%.1lf kg shakar narxi %.1f so'm turadi\n",i,n);

    }
    return 0;
}
