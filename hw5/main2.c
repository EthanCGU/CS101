#include<stdio.h>

int main(){
    double PI = 4.0, t;
    int i;
    for(i = 1; ; i++){
        t = 4.0 / (2 * i + 1);
        if(i%2 == 1){
            PI = PI - t;
        }
        else{
            PI = PI + t;
        }

        if(PI >= 3.141585 && PI < 3.141595){
            break;
        }
    }
    int x = i + 1;

    printf("%d", x);
}

