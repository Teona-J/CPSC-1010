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
	int pay;
	double afford;
	goAgain = 1;
	afford = 0;
	do {
		printf("\n\nCan I afford this car?");
		printf("\n\nMonthly payment amount:  ");
		scanf("%lf", &monthlyPmt);
		printf("Term of loan (total number of months):  ");
		scanf("%d", &term);
		printf("Original loan amount:  ");
		scanf("%lf", &loanAmt);

		printf("\n\nTotal amount paid back:  $%.2lf", monthlyPmt * term);

		printf("\nTotal interest paid back:  $%.2lf", 
				(monthlyPmt * term) - loanAmt);
		printf("\n\nEnter your monthly take-home pay ");
		scanf("%d", &pay);
		
		afford = monthlyPmt /  pay;

		if ( afford > .15) {
			printf("\nThis car payment is more than 15%% of your monthly income\nand is probably not affordable.");
			printf("\n\nWould you like to try again? 0 for no, 1 for yes: ");
			scanf("%d", &goAgain);

			while( goAgain != 1 && goAgain != 0) {
				printf("Would you like to try again? 0 for no, 1 for yes: ");
				scanf("%d", &goAgain);
			}	
		}

		else if (afford >=.10 && afford <= .15) {
			printf("\nThis car payment is between 10-15%% of your monthly income.\nIt might be affordable.");
			goAgain = 0;
		}

		else {
			printf("\nThis car payment is less than 10%% of your monthly income.\nThis is an affordable car.");
			goAgain = 0;
		}


 } while (goAgain == 1);
	

	printf("\n\n");

	return 0;
}
