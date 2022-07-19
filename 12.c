#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //S=1.1*1.2*1.3*...*n
    double S=1, n=7;
    for(double i=1.1; i<=n;i+=0.1){
        S*=i;
    }
    printf("natija: %lf\n",S);
    return 0;
}