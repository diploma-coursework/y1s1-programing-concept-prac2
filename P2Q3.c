/*
Program Filename: P2Q3.c
Purpose			: Converts height from centimeters to inches
*/
#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	// Variable declarations
	char firstName[11], lastName[21];
	int heightCM;
	double heightIN;

	printf("Enter your first name: ");
	gets(firstName);

	printf("Enter your last name: ");
	gets(lastName);

	printf("Enter your height in \"cm\": ");
	scanf("%d", &heightCM);

	// Process
	heightIN = heightCM / 2.54;

	// Output
	printf("\n%s %s, ", firstName, lastName);
	printf("your height is %f inches.\n", heightIN);

	system("pause");
}