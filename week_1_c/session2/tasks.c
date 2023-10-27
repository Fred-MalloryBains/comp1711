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

int summation(){

    
    int nums[5] = {1,2,3,4,5};
    int total = 0;
    int i;
    

    for (i = 0; i < 5 ; i++) {
        total += nums[i];
    }
    printf("%d\n",total);

}

int reverse(){
    int nums[5] = {1,2,3,4,5};
    int new[5];
    int i;
    int j = 0;

    for (i = 4; i >= 0; i--){
        new[j] = nums[i];
        j++;
    }
    int *ptr = new;
    i = 0;
    for (i= 0 ; i < 5; i++){
        printf("%d\n", *(ptr + i));
    }
    }


int main()
{
    reverse();
     

    int i;
    for (i = length - 1; i >=0; i--) {
        printf ("%c", str[i]);
    }

    printf ("\n");
}