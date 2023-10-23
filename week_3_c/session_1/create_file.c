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


int main (){
    
    char filename[] = "data.txt";
    FILE *file = open_file (filename, "r"); // file pointer
    

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL){
        printf ("%d\n", atoi(line_buffer)); //converts it ot integer

    }
    
    /*
    
    int number, num_lines = 10;
    int i;
    
    
    printf ("Type, %d numbers: ", num_lines);
    for (i=0; i < num_lines; i ++){
        scanf("%d", &number );
        fprintf (file,"%d\n", number );
    

    }
    */
   

    fclose (file);
    return 0;
}