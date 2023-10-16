#include <stdio.h>

int main(){

    int mark = 200;

    while (mark < 0 || mark > 100){
        printf ("enter a mark: ");
        scanf ("%d", &mark);
    }
    
    if (mark < 40){
        printf ("%d, is a fail\n", mark);
    }
    else {
        printf ("%d, is a pass\n", mark);

    }
    return 0;
}