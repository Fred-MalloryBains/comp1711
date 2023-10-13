#include <stdio.h>

int odd(){
    int i =20;

    while (i >= 0)
    {
        if ( i % 2 !=0 )
        {
            printf("%d\n", i);
            
            
        }
        i--;

    }
}


int main()
{
    char str [] = "Hello";

    int length = 0;

    while (str[length] != '\0'){
        length++;

    }

    int i;
    for (i = length - 1; i >=0; i--) {
        printf ("%c", str[i]);
    }

    printf ("\n");
}