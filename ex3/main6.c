#include <stdio.h>

int main() {
    int i = 1599; // 可更改為任意值
    if (i <= 1500) {
        printf("70元\n");
    } else {
        int n = i - 1500; // 超過 1500 的部分
        if (n % 100) {
            int h = (n / 100 + 1) * 10; // 不足 100 算作下一個完整 100
            printf("%d 元\n", 70 + h);
        } else {
            printf("%d 元\n", 70 + (n / 100) * 10); // 整數倍 100
        }
    }
    return 0;
}

