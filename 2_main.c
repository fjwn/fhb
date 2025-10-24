//202510304226
//2383401317@qq.com
//范慧彬
#include <stdio.h>

int main() {
    int score;
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("输入的成绩无效，请输入0-100之间的整数！\n");
    } else if (score >= 90) {  
        printf("等级：A\n");
    } else if (score >= 80) {  
        printf("等级：B\n");
    } else if (score >= 70) {  
        printf("等级：C\n");
    } else if (score >= 60) {  
        printf("等级：D\n");
    } else {  
        printf("等级：E\n");
    }

    return 0;
}