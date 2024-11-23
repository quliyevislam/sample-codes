#include <stdio.h>
#include <stdlib.h>
/**
 * This program demonstrates dynamic memory allocation for a 2D array using `calloc`.
 * A 3x3 matrix is allocated dynamically, filled with values, and then printed.
 * The program allocates memory for each row of the matrix and stores values from a static 2D array.
 * Finally, it prints the matrix and frees the dynamically allocated memory.
 */
int main(void) {
    int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    /*
     for (int i = 0;i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             printf("%d ", array[i][j]);
         }
         printf("\n");
     }
    */
    int **ptr;
    ptr = calloc(sizeof(int*), 3);
    *ptr = calloc(sizeof(int),3);
    *(ptr + 1) = calloc(sizeof(int), 3);
    *(ptr + 2) = calloc(sizeof(int), 3);
    
    for (int i = 0;i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(ptr + i) + j) = array[i][j];
            //ptr[i][j]
         }
    }
    for (int i = 0;i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
            //ptr[i][j]
         }
        printf("\n");
    }
    
    //int *ptr2;
    //ptr2 = calloc(sizeof(int),3);
    //ptr2 = realloc(ptr2, sizeof(int)*6);
    free(*(ptr + 2));
    free(*(ptr + 1));
    free(*(ptr));
    free(ptr);
    return (0);
    }
