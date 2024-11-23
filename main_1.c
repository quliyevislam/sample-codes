#include <stdio.h>
#include <stdlib.h>
/**
 * This program demonstrates dynamic memory allocation.
 * It creates a dynamically allocated array, fills it with values 0-9,
 * prints the values, and then frees the memory.
 */
int main(void) {
     int array[10] = {1, 2};
    /*
     for (int i = 0; i < 10; i++)
     {
         printf("%d\n", array[i]);
     }
    */
    int *ptr;
    ptr = malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}
