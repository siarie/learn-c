#include <stdio.h>


int main(void) {
	int age = 15;

	// if statement
	if ( age < 18 ) {
		printf("Your age is %d.\n", age);
		printf("-----------------\n");
		printf("You are not allowed to enter this room.\n\n");
	}

	age = 20;

	// if-else statement
	if (age >= 18) {
		printf("Your age is %d.\n", age);
		printf("-----------------\n");
		printf("Accepted...\n");

		// nested else-if
		if ( age < 20 ) {
			printf("Congrats. You're now an adult\n");
		} else if (age >=20 && age <40) {
			printf("Welcome to the Underground\n");
		} else {
			printf("It's time for you to retire\n");
		}
	} else {
		printf("Get out...\n");
	}

	return 0;
}
