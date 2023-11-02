#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *open_file(char filename[], char mode[]){
    FILE *file = fopen (filename, mode);
    if (file == NULL){
        perror ("");
        exit (1);
    }
    return file;
}




int main(){

    char filename[] = "FitnessData_2023.csv";
    FILE *file = open_file (filename, "r"); // file pointer
    int buffersize = 100;
    char line_buffer[buffersize];
    int file_size = 59;

    char *arr [file_size];
    



    /*
    char *arr[3];

    arr[0] = "high";
    arr[1] = "john";
    arr[2] = "hoes";

    printf("String array Elements are:\n");
   
    for (int i = 0; i < 3; i++) 
    {
        printf("%s\n", arr[i]);
    }
    return 0;
    */
   return 0;
}