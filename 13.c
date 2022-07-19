#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main () {
    //S=1.1-1.2+1.3-...n
    double x=1,S=0, n=1.3;
    for(double i=1.1; i<=n+0.1; i+=0.1) {
        x++;
        S=S+pow((-1),x)*i;
    }
    printf("%0.2lf\n",S);
    
        return 0;
}