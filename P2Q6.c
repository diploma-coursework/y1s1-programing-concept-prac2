#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

#define MAXIMUM_LOAN_PERIOD 14
#define FINE_RATE 0.2

void main() {
	double amountFined;
	int numberOfBooks, daysBorrowed, daysOverdue;

	printf(
		"----------------\n"
		"BOOK LOAN SYSTEM\n"
		"----------------\n"
		"Enter number of books borrowed: "
	);
	scanf("%d", &numberOfBooks); 

	printf("Enter days borrowed: ");
	scanf("%d", &daysBorrowed);

	if (daysBorrowed > MAXIMUM_LOAN_PERIOD) {
		daysOverdue = daysBorrowed - MAXIMUM_LOAN_PERIOD;
	}
	else {
		daysOverdue = 0;
	}

	amountFined = daysOverdue * FINE_RATE * numberOfBooks;

	printf(
		"---------------------------------------\n"
		"Days overdue: %d\n"
		"Fine        : %.2f\n",
		daysOverdue,
		amountFined
	);

	system("pause");
}