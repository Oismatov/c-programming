#include <stdio.h>
#include <math.h>
//n ta hadni topish
int main (){
    double A1=1, A2=2,A3,n;
    scanf("%lf",&n);
    for(int i=3; i<=n;i++){
        A3=(A1+(2*A2))/3;
        A1=A2;
        A2=A3;
        printf("%lf,%lf,%lf\n",A3,A2,A1);
    }
    printf("%lf\n",A3);
    return 0;
}