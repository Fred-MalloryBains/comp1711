#include <stdio.h>
#include <math.h>

int helloWorld () {
    printf("Hello World!\n ");
    return 0;
}

int summation (){
    float a;
    float b; 

    float c;

    printf ("enter two numbers: ");
    scanf ("%f", &a );
    scanf ("%f", &b );
    c = a + b;
    printf ("The result is %f\n", c);
    return 0;
}

int areaOfCircle () {

    float radius;
    float area;

   // used math import 
   // M_PI is pi constant

    printf ("enter the radius: ");
    scanf ("%f", &radius);

    // pi r^2

    area = radius * radius * M_PI;

    printf ("THe area is %f\n", area);

    return 0;



}

int swapVariables (){
    // not doing it
}

int fareinheit (){
    float temperature;
    scanf ("%f",&temperature);

    temperature = (temperature - 32) * (5/6);
    printf ("The result is %f\n", temperature);
    return 0;



}

int oddOrEven (){
    int a;
    printf ("enter a number: ");
    scanf ("%d",&a);
    a = a % 2;


    if (a == 0){
        printf("even\n");
    } else {
        printf ("odd\n");
    }
}
int factorial_recursion (int number){
    if (number < 2){
        return number;
    } else {
        return (number * factorial_recursion((number-1)));
    }
}

int factorial () {
    int number;
    int result;

    printf ("Enter a number: ");
    scanf ("%d", &number);
    result = factorial_recursion (number);
    printf ("the result is %d\n", result);


}
int main() {
    fareinheit();
    return 0;

    
}