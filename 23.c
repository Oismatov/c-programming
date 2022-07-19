#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //n faktorial
    double m=1,n=5,f=1,x=7, xd=0,summ=0;
    int interpretator=0;
    for(double i=1; i<=2*n-1; i+=2) {
        xd=pow(x,i);
        for(double j=1;j<=i; j++) {
            f=f*j;
           
        }
         
        summ+=pow((-1),interpretator)*m*xd/f; 
        interpretator++;
       printf("%0.1lf^%0.1lf/%0.1lf! ",x,i,i);
    }
    printf("= %lf\n",(summ));
    return 0;
} 
