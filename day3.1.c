#include <stdio.h>
int main(){
    int a=0;
    printf("请输入一个整数a，让我来判断这是奇数还是偶数\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("你输入的值a是偶数\n");
    else
        printf("你输入的值a是奇数\n");
    return 0;
}