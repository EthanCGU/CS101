#include <stdio.h>

int main()
{
    int i = 12345;
    int l = i%10;
    
    while(i >= 10){
        i /= 10;
    }
    
 
    printf("first %d + last %d = %d\n", i, l, i+l);
    

    return 0;
}
