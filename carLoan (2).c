// car loan code - code for students in:
// ~/101/classExamples/Chp4
//
// calculate total amount paid by the end of a loan 
// 	based on montly payment
// total amount paid = monthly payment * term of loan (# months)
// 
// will add a loop later


#include <stdio.h>

int main() {
	double monthlyPmt, loanAmt;
	int term;
	int goAgain;
	goAgain = 1;

	while (goAgain == 1) {
		printf("\n\nTotal amount paid back at end of a car loan");
		printf("\n\nMonthly payment amount:  ");
		scanf("%lf", &monthlyPmt);
		printf("Term of loan (total number of months):  ");
		scanf("%d", &term);
		printf("Original loan amount:  ");
		scanf("%lf", &loanAmt);

		printf("\n\nTotal amount paid back:  $%.2lf", monthlyPmt * term);

		printf("\nTotal interest paid back:  $%.2lf", 
				(monthlyPmt * term) - loanAmt);
		printf("\n\nWould you like to try again? 0 for no, 1 for yes:  ");
		scanf("%d", &goAgain);

		while( goAgain != 1 && goAgain != 0) {
			
		printf("Would you like to try again? 0 for no, 1 for yes:  ");
		scanf("%d", &goAgain);
		}

	}

	printf("\n\n");

	return 0;
}
