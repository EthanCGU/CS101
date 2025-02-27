#include <stdio.h>

int main()
{
    int n = 7, c = 0;
    while(n){
        if(n & 1){
            c++;
        }
        n>>=1;
    }
    printf("%d\n", c);
    return 0;
}
