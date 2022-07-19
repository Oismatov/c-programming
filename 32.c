#include <stdio.h>
#include <math.h>
//fibonachi ketmaketligi
int main (){
    int F1=1, F2=1,F3,n;
    scanf("%d",&n);
    for(int i=3; i<=n+1;i++){
        F3=F1+F2;
        F1=F2;
        F2=F3;
        printf("%d,%d,%d\n",F3,F2,F1);
    }
    printf("%d\n",F3);
    return 0;
}