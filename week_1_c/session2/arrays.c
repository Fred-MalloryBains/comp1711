#include <stdio.h>

int main(){
    int a[10];
    int count;

    for (count = 0; count < 10; count ++ )
    {
        a[count] = count * 10 + count;
        printf("%d\n", a[count]);
    }

    printf("the first and second elements are, %d and %d\n", *a, *(a+1));
}