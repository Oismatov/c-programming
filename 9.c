#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //a<b kvadratlari yig'indisi
    int a=5,b=12,S=0;
    for(int i=a; i<=b; i++) {
        S+=pow(i,2);
    }
    printf("Natija: %d\n",S);
    return 0;
}