#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //a<b ko'paytma
    int a=5,b=12,S=1;
    for(int i=a; i<=b; i++) {
        S*=i;
    }
    printf("Natija: %d\n",S);
    return 0;
}