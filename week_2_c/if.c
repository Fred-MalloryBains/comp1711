#include <stdio.h>

int conditional (){
    int a = 1;
    switch (a) {
        case 0: printf ("0/n");
        break;
        case 1: printf ("1/n");
        break;
        default: break;

    }
}


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
    conditional();
    return 0;
}