#include <stdio.h>

int main() {
    int i = 2100; // 可以改為其他年份
    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
        printf("閏年\n");
    } else {
        printf("不是閏年\n");
    }
    return 0;
}
