//202510304226
//2383401317@qq.com
//范慧彬
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);  
    fahrenheit = celsius * 9.0 / 5 + 32;  
    printf("华氏温度为：%.2f\n", fahrenheit);  
    return 0;
}