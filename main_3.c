#include <stdio.h>
/*
 * This program demonstrates the use of function pointers in C.
 * It defines three simple mathematical functions: add, sub, and mul, 
 * which perform addition, subtraction, and multiplication respectively.
 * A function pointer array is created to store the addresses of these functions.
 * The program then loops through the array, calling each function with the arguments 16 and 15,
 * and prints the results (16 + 15, 16 - 15, and 16 * 15).
 */
int add(int a, int b) {
	return (a + b);
}

int sub(int a, int b) {
	return (a - b);
}

int mul(int a, int b) {
	return (a * b);
}

int main(void) {

	int (*func_array[3]) (int, int);

	func_array[0] = &add;
	func_array[1] = &sub;
	func_array[2] = &mul;

	for (int i = 0; i < 3; i++) {
 		printf("%d\n", func_array[i](16, 15));
	}	
	return (0);
}
