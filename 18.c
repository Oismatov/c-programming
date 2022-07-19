#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //a ni n darajasi
    int a=5, n=3,S=1,summ=1;
    for(int i=1; i<=n; i++) {
        S=S*a;
        summ=summ+S;
        printf("%d ning %d darajasi %d yig'indi %d\n",a,i,S,summ);
    }
    printf("yig'indi %d\n",summ);
    return 0;
} 
