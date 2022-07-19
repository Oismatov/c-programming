#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //a<b
    int a=7,b=20,S=0;
    for(int i=a;i<=b; i++) {
        S+=i;
    }
    printf("natija: %d\n",S);
    return 0;
}