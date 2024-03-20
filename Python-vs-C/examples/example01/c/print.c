// print.c
// このCプログラムは、printf関数を使用してテキストと数字を出力する方法を示しています。

#include <stdio.h> // 標準入出力ライブラリを含めることでprintf関数を使用可能にします

int main() {
    // 文字列"hello world"を出力
    printf("hello world\n"); // printf関数を使用して文字列を出力、\nで改行

    // 数字1を出力
    printf("%d\n", 1); // printf関数を使用して数字を出力、%dは数値を表すフォーマット指定子

    return 0; // プログラムが終了したことを示す
}