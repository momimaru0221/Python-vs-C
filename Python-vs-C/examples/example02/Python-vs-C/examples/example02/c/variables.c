// variables.c
// このCプログラムは、異なる型の変数を宣言し、それらを出力することで、静的型付けの概念を示します。

#include <stdio.h>

int main() {
    int integerVar = 42;         // 整数型
    float floatVar = 3.14;       // 浮動小数点型
    char charVar = 'A';          // 文字型
    const char *stringVar = "Hello, C!"; // 文字列型

    // 各変数の値と型を出力
    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Char: %c\n", charVar);
    printf("String: %s\n", stringVar);

    return 0;
}