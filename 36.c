#include <stdio.h>
#include <math.h>
int main (){
    int summ=0,n,k;
    printf("n=");
    scanf("%d",&n);
  printf("k=");
  scanf("%d",&k);
    for(int i=1; i<=n;i++){
    summ+=pow(i,k);
    }
    printf("%d\n",summ);
    return 0;
}