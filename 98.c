#include <stdio.h>
#include <math.h>
int main (){
    
    printf("Большая и меньшая цифры числа\n");
    printf("Введите число не большее 99: ");
    int n,num1,num2;
    scanf("%d",&n);
    printf("\n");
    num1=n/10;
    num2=n%10;
    if(num1>num2) {printf("%d - большая цифра\n%d - меньшая цифра\n",num1,num2);}
    if(num1<num2) {printf("%d - большая цифра\n%d - меньшая цифра\n",num2,num1);}
    if(num1=num2) {printf("there are equal");}
    return 0;
}