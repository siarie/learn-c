/*
 * Learn C: Data Types
 *
 * learn various data types in C
 */

#include <stdio.h>

#define USERNAME "siarie"

int main(void) {
	printf("Username\t = %s\n", USERNAME);

	int age = 22; // Integer
	printf("Age\t\t = %d\n", age); 

	// Float
	float height = 178.47;
	double weight = 45.6;
	printf("Height\t\t = %.2f\n", height);
	printf("Weight\t\t = %.2f\n", weight);

	char rank = 'A'; // Character
	printf("Rank\t\t = %c\n", rank);

	// Constant variable
	const int graduation_year = 2018;
	printf("Graduation\t = %d\n", graduation_year);
}
