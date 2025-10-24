//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main()
{
    int score;
    printf("请输入一个成绩\n");
    scanf("%d",&score);
    if (score >=90 && score <=100){
        printf("A");
    }
    else if (score >=80 && score <=89){
        printf("B");
    }
    else if (score >=70 && score <=79){
        printf("C");
    }
    else if (score >=60 && score <=69){
        printf("D");
    }
    else {
        printf("E");
    }
    return 0;
}
