compiled and interpreted 

IN C:
gcc "first".c -o "first"
./first

printf needs a formtat specifier 
functions need a return statement

int main() {
    int a = 10;
    printf("%d",a);
    return 0; 
}

%s is a format for string 

int main() {
    char name[15];

    printf ("Hello, please enter your name:"); 
    scanf ("%s",name);
    printf ("Hello %s\n", name);

    return 0;
}

int main() {
    int age;

    printf ("Hello, please enter your age:"); 
    scanf ("%d", &age);  // & is used as the memory address of the variable 
    printf ("You are %d\n", age);

    return 0;
}