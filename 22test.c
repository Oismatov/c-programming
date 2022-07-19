#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 22-misol, for
int main(){

    double n=10, x=7, S=1;
    double natija = 1;

    for(double i=1; i<=n; i++){
        natija *= i;
        printf("Natija: %lf\n", natija);
        S += pow(x, i)/natija;
        printf("Natija(Sum): %lf\n", S);
    }

    return 0;
}