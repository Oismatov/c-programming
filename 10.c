#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //1/n yig'indini top 
    double n=20,S=0;
    for(double i=1; i<=n; i++) {
        S+=1/i;
    }
    printf("Natija: %lf\n",S);
    return 0;
}