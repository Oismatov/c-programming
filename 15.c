#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //a ni n darajasi
    int a=5, n=28,S=1;
    for(int i=1; i<=n; i++) {
        S=S*a;
        printf("%d ning %d darajasi %d\n",a,i,S);
    }
    return 0;
} 
