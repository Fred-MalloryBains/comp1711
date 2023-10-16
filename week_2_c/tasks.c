#include <stdio.h>

int bronze(){
    int a;
    printf ("enter a number: ");
    scanf ("%d ", &a);
    if (a > 0){
        printf("%d, is postiive \n", a);
    }
    else if(a == 0){
        printf ("%d, is equal to 0\n", a);
    }
    else{
        printf ("%d, is negative\n", a);
    }

    if (a % 5 ==0 && a % 4 == 0 ){
        printf ("%d, is divisible by 4 and 5 ", a);

    }
    else {
        printf("%d, is not divisible by 4 and 5", a);
    }
}

int gold(){
    int input = -2;

    while (input != -1){
        printf("enter an input: ");
        scanf ("%d", &input);

        if (input <= 100 && input >= 0 ) {
            printf ("input in range\n");
        }
    }
    printf ("terminated program\n");
    
    input = 0;

    while (input <= 5 && input >= 0){
        printf("enter a new input: ");
        scanf ("%d", &input);
        switch(input){
            case 1: printf("empty");
            break;
            case 2: printf("empty");


        }
    }

    
}

int main(){
    gold ();
}