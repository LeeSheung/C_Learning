#include <stdio.h>

// 函数声明
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main() {
    int a, b;
    char op;
    
    printf("请输入算式（如 3+5）：");
    scanf("%d%c%d", &a, &op, &b);
    
    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, b, add(a, b));
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, sub(a, b));
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, mul(a, b));
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, divide(a, b));
            } else {
                printf("除数不能为0！\n");
            }
            break;
        default:
            printf("不支持的运算符\n");
    }
    
    return 0;
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }