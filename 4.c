#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main (){
    //1 kg konfet 13 400 so'm
    int a=13400,n=1;
    for(int i=1; i<=10; i++){
        n=i*a;
        printf("%d kg konfet narxi %d\n",i,n);
    }
    return 0;
}