#include <stdio.h>

// 函数声明
void sayHello(void);
int add(int a, int b);

int main() {
    // 调用函数
    sayHello();
    
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    
    return 0;
}

// 函数定义：无返回值，无参数
void sayHello(void) {
    printf("Hello!\n");
}

// 函数定义：返回int，接收两个int参数
int add(int a, int b) {
    return a + b;
}