#include <stdio.h>
#include <math.h>
//n ta hadi
int main (){
    double A1=1, A2=2,A3=3, A4,n;
    scanf("%lf",&n);
    for(int i=4; i<=n;i++){
        A4=A3+A2-(2*A1);
        A1=A2;
        A2=A3;
        A3=A4;
        printf("%lf,%lf,%lf\n",A3,A2,A1);
    }
    printf("%lf\n",A3);
    return 0;
}