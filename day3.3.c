#include <stdio.h>
int main(){
    int x,n=0;
    printf("输入一个数我来判断是几位数\n");
    scanf("%d",&x);
    n++;
    x=x/10;
    while(x>0){
        n++;
        x=x/10;
    }
    printf("这是一个%d位数\n",n);
return 0;
}