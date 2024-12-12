#include<stdio.h>

int main(){
    int x = 1, y = 1;
    for(int i = 1; i <= 81; i++){
        printf("%d*%d=%d\t", y, x, x*y);
        if(i%9 == 0){
            printf("\n");
            x = 1;
            y++;
        }
        else{
            x++;
        }
    }
    return 0;
}
