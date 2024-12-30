#include <stdio.h>

int main() {
    char str[] = "HelloWorld"; // Khai báo và gán giá trị cho chuỗi

    printf("Chuỗi sau khi in từng ký tự cách nhau 1 dấu cách: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]); // In từng ký tự, cách nhau 1 dấu cách
    }
    printf("\n");

    return 0;
}
