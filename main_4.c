#include <stdio.h>
#include <stdarg.h>
/*
 * This program defines a function `print_args` that takes a variable number 
 * of integer arguments, prints the total number of arguments, and then 
 * prints each argument on a new line. The list of arguments must be terminated
 * by a 0.
 *
 * The `print_args` function uses the `stdarg.h` library to handle variable 
 * argument lists. It prints the number of arguments passed and then iterates 
 * through the arguments, printing each one until it encounters the terminating 0.
 *
 * The `main` function demonstrates how to call `print_args` with 4 arguments 
 * (including the terminating 0) and returns 0 on successful execution.
 */
void print_args(int count, ...) {
	va_list args;
	int num;
	
	printf("%d\n", count);
  	
	va_start(args, count);
	do{
		num = va_arg(args, int);
		printf("%d\n", num);
    	}while (num != 0);
  	va_end(args);
}

int main(void) {

print_args(4, 34, 23, 3, 0);
return (0);
}
