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


// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array


void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {

    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {
    // get length of file

    char filename[] = "FitnessData_2023.csv";
    FILE *file = open_file (filename, "r"); // file pointer
    int buffersize = 100;
    char line_buffer[buffersize];
    int file_size = 0;
    
    // getting the size of the file
    while(fgets(line_buffer, buffersize, file) != NULL) {
        file_size += 1;
    }
    printf("The number of lines in the file is %d\n", file_size);

    char *arr [file_size];
    int i = 0 ;
    
    int new_buffersize = 100;
    char new_line_buffer[new_buffersize];

    // copying each line to an array called arr
    while(fgets(new_line_buffer, new_buffersize, file) != NULL) {
        
        printf("%s\n", new_line_buffer);

        i += 1;
    }

    /*
    i = 0;

    for (i =0 ; i < file_size; i++){
        printf("%s\n",arr[i]);
    }
    */

    fclose(file);
    return 0;




}