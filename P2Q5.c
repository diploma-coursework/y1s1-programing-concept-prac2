#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)
#define PI 3.14159 // PI (ie π) has a constant (fixed) value

void main() {
	double area, circumference, radius; //to store the values

	printf("Enter a radius of a circle (cm): "); // ask user for radius
	scanf("%lf", &radius); // get and store input

	area = PI * radius * radius; // calculate area
	circumference = 2 * PI * radius; // calculate circumference

	printf("Area = %.2fcm\n", area); // display area's value
	printf("Circumference = %.2fcm\n", circumference); // display circumference's value

	system("pause"); // pause the output screen
}