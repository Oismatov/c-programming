#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //n^2=1+3+5+..(2n-1)
    int n=7, kv=0;
    for(int i=1; i<=(2*n-1);i+=2){
        kv+=i;
        printf("natija: %d\n",kv);

    }
    return 0;
}