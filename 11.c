#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //s=n^2+(n+1)^2+...(2n)^2
    int n=12,S=0;
    for (int i=0; i<=n;i++){
        S+=pow((n+i),2);
    }
    printf("Natija: %d\n",S);
    return 0;
}