#include <stdio.h>
int main(){
    int n,i,ret=1;
    printf("请输入一个整数n 我将计算出它的阶乘\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ret=ret*i;
    }
    printf("%d的阶乘为%d\n",n,ret);
return 0;
}