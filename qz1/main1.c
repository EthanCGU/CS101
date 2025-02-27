#include <stdio.h>

int main()
{
    int i = 3101;
    int a = i - 1500;
    
    if(a <= 0){
        printf("70\n");
    }
    else if(a <= 100){
        printf("80\n");
    }
    else{
        int c = a / 100;
        int d = a % 100;
        if(d != 0) c++;
        int sum = c*10 + 70;
        printf("%d \n", sum);
    }
    

    return 0;
}

