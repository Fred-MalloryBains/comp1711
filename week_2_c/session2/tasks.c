#include <stdio.h>
#include <math.h>

float area(float radius){
    float total;
    total = radius * radius * M_PI;
    return total;
}

float volume (float radius){
    float total;
    total = pow(radius,3)  * M_PI * 4 / 3; 
    return total;
}

char isPrime (int num){
    int i;
    char result;
    result = "t";
    for (i = 1; i < sqrt(num); i ++){
        if (num % i == 0){
            result = "f";
            break;
        }

    }
    return result;


}



int main(){
    //poo poo wee wee
    float radius;
    float result;
    int num;
    printf("enter a number\n");
    scanf ("%d,\n", &num);
    result = volume(num);
    printf ("your number is is: %c\n", result);

}