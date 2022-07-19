#include <stdio.h>
#include <math.h>

#include <stdbool.h>
int main () {
    //n faktorial
    int n=4,f=1, summ=0;
    for(int i=1; i<=n; i++) {
        f=f*i;
        summ=summ+f;
    }
    printf("%d!= %d yig'indisi %d\n",n,f,summ);
    return 0;
} 
