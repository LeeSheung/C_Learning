#include <stdio.h>
int main(){
    double a,b;
    char op;
    printf("输入一个运算时我将计算出结果\n");
    scanf("%lf%c%lf",&a,&op,&b);
    switch(op){
    case '+':
    printf("%g + %g = %g",a,b,a+b);
    break;
    case '-':
    printf("%g - %g = %g",a,b,a-b);
    break;
    case '*':
    printf("%g * %g = %g",a,b,a*b);
    break;
    case '/':
    printf("%g / %g = %g",a,b,a/b);
    break;
    default:
    printf("不支持该运算符\n");
    }
return 0;
}