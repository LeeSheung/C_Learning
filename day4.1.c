#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int numble=rand()%100+1;
    int a,count=0;
    printf("我已经想好了一个数请你来猜猜看吧\n");
    do{
        printf("请你输入一个数\n");
        scanf("%d",&a);
        count++;
        if(a>numble)
        printf("不对哦 比你这个数要小一点哦\n");
        else if(a<numble)
        printf("不对哦 比你这个数要大一点哦\n");

    }while(a!=numble);
    printf("太棒啦！你猜了%d次终于猜出来正确答案是%d了",count,numble);

}