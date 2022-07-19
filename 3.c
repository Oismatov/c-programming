#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main (){
    //a<b integer
    int a=10, b=20;
    for(int i=b; i>=a; i=i-1){
    printf("natija: %d\n",i);
    }
    return 0;
}