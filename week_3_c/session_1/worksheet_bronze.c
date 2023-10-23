#include <stdio.h>
#include <stdlib.h>

// creates a file 
FILE *open_file(char filename[], char mode[]){
    FILE *file = fopen (filename, mode);
    if (file == NULL){
        perror ("");
        exit (1);
    }
    return file;

}

int main(){

    char filename[] = "squares.dat";
    FILE *file = open_file (filename, "r"); // file pointer
    /*
    int n,i;
    int squared;

    printf ("enter the number of squares u want: ");
    scanf ("%d\n", &n);

    for (i = 1; i <= n; i ++){
        squared = i *i;
        fprintf (file, "%d\n", squared);
    }
    */
   float sum = 0;
   int lines = 0;
   float average;
   int buffer_size = 100;
   char line_buffer[buffer_size];


   while (fgets(line_buffer, buffer_size, file) != NULL){
        lines += 1;
        sum += atoi(line_buffer); //converts it ot integer

    }

    average = sum/ lines;
    printf("the average is: %f\n", average);
    

    fclose (file);
    return 0;
}