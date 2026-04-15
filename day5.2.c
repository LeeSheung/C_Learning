#include <stdio.h>
int main(){
    double avge;
    int i,sum=0;
    int score[5];
    printf("请输入五个同学的成绩\n");
    for(i=0;i<5;i++){
    printf("请输入第%d的同学的成绩:",i+1);
    scanf("%d",&score[i]);
}
int max=score[0];
int min=score[0];
for(i=0;i<5;i++){
    if(score[i]>max)
    max=score[i];
}
for(i=0;i<5;i++){
    if(score[i]<min)
    min=score[i];
    sum=sum+score[i];
    avge=sum/5;
}
printf("他们中最高分为：%d\n",max);
printf("他们中最低分为：%d\n",min);
printf("它们的总分为：%d\n",sum);
printf("他们的平均分为%f\n",avge);

}