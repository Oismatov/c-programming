#include <stdio.h>
#include <math.h>
int main (){
    //kolichestvo elementov drobi
    printf("How much? ");
    int n;
    double summ=1;
    scanf("%d",&n);
    for (int i=1; i<n, i++;)
    {
        summ=1+(1/summ);
      
    }
    printf("%0.4lf",summ);
    return 0;
}