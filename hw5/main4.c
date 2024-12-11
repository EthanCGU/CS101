#include<stdio.h>

int main(){
    int i = 12345;
    int a, b, t;
    if(i<10000){
        if(99<i<1000){
            b = i % 10;       
            i = i + (b*1000) - b;
        }
        else if(9<i<100){
            b = i % 10;
            i = i + (b*1000) - b;
        }
        else{
            i = i * 1000;
        }
    }
    else{
        b = i % 10;
        t = i % 10000;
        a = t / 1000;
        i = i - (a * 1000) + (b*1000) - b + a;
    }
    printf("%d", i);
    
    return 0;
}

