#include <stdio.h>
int main(){
    int score;
    printf("请输入你的成绩\n");
    scanf("%d",&score);
    score=score/10;
    switch(score){
    case 9:
    printf("你的成绩等级为A\n");
    break;
    case 8:
    printf("你的成绩等级为B\n");
    break;
    case 7:
    printf("你的成绩等级为C\n");
    break;
    case 6:
    printf("你的成绩等级为D\n");
    break;}
    return 0;
}