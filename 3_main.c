//202510304226
//2383401317@qq.com
//范慧彬
#include <stdio.h>

int main() {
    int a, b;
    char op;  

    printf("请输入两个整数和运算符（格式：a b 运算符）：");
    scanf("%d %d %c", &a, &b, &op); 
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("除数不能为0！\n");  
            } else {
                printf("%d\n", a / b); 
            }
            break;
        default:
            printf("运算符无效，请输入 +、-、*、/ 中的一个！\n");
    }

    return 0;
}