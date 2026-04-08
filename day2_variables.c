#include <stdio.h>
int main(){
    int price=0;
    int amount=100;
    printf("请输入您买的商品多少钱：\n");
    scanf("%d",&price);
    printf("请问你给人民币的面值：\n");
    scanf("%d",&amount);
    int change=amount-price;
    printf("找您%d元\n",change);
    return 0;
}