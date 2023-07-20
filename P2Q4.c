/*
Program Filename: P2Q3.c
Purpose			: Converts height from centimeters to inches,
				  age from years to days
*/
#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	// Variable declarations
	char firstName[11], lastName[21];
	int heightCM;
	double heightIN;
	int ageInYears, ageInDays;

	printf("Enter your first name: ");
	gets(firstName);

	printf("Enter your last name: ");
	gets(lastName);

	printf("Enter your height in \"cm\": ");
	scanf("%d", &heightCM);

	printf("Enter your age in \"years\": ");
	scanf("%d", &ageInYears);

	// Process
	heightIN = heightCM / 2.54;
	ageInDays = ageInYears * 365;

	// Output
	printf("\n%s %s, ", firstName, lastName);
	printf("Your height is %f inches.\n", heightIN);
	printf("Your age is %d days!!!\n", ageInDays);

	system("pause");
}