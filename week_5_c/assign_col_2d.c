
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[][4] ){
  for (size_t i = 0; i <= 3; ++i) {
     for (size_t j = 0; j <= 4; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}



void printColumn(int a[][4], int colIndex, int rows, char when) {
    switch (when) {
        case 'B':
            printf("Values in column %d before change:\n", colIndex); break;

        case 'A':
            printf("Values in column %d after change:\n", colIndex); break;

        default: 
            printf("Invalid option\n");
            return;
    }

    for (int i = 0; i < rows; ++i) {
        printf("%d\n", a[i][colIndex]);
    }
}

void changeColumn(int a[][4], int colIndex, int rows, int newValue) {
    for (int i = 0; i < rows; ++i) {
        a[i][colIndex] = newValue;
    }
}

void randomize (int a[][4]){
    for (size_t i = 0; i <= 2; ++i) {
     for (size_t j = 0; j <= 3; ++j) {
        a[i][j] = rand()% 10;
     }
     
     }

}
void multiply (int a[][4],int b[][4], int c[][4]){
    for (size_t i = 0; i <= 2; ++i) {
     for (size_t j = 0; j <= 3; ++j) {
        c[i][j] = a[i][j] * b[i][j];
     }
     
     }
}

int main() {
    int array1[3][4];
    int array2[3][4];

    srand(time(NULL));

    randomize(array1);
    randomize(array2);

    int array3[3][4];

    multiply(array1,array2,array3);

    printArray(array3);

    int colIndexToChange = 2; // Change the values in the third column (column at index 2)
    int newValue = 20;

    //printColumn(array1, colIndexToChange, 3, 'B'); // 'B' stands for Before
    changeColumn(array1, colIndexToChange, 3, newValue);
    //printColumn(array1, colIndexToChange, 3, 'A'); // 'A' stands for After

    return 0;
}
