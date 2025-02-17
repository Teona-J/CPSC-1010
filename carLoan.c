
#include <stdio.h>
#include<math.h>

int main ()	{
	int loanAmnt;
	int term;
	int i;
	double monthPay;
	double totPay;
	double intRate;
	double princ;
	double monthInt;
	double prinBal;


	printf("\n\nMonthly payment for a car loan.\n");

	printf("\nEnter the loan amount: ");
	scanf("%d", &loanAmnt);

	printf("Interest rate: ");
	scanf("%lf", &intRate);

	printf("Term on loan (number of months): ");
	scanf("%d", &term);
	
	intRate = intRate / 100;

	monthPay = loanAmnt * (intRate / 12) / (1 - pow (1 + intRate/12, -term));
	printf("\n\nYour monthly payment will be: $%.2lf.\n", monthPay);

	totPay = monthPay * term;
	printf("At the end of the loan, you will have paid a total: $%.2lf.\n", totPay);

	printf("\n\n");

	double table[term][3];
	
	prinBal = loanAmnt;

	printf("Principal\t\tInterest\t\tLoan Balance\n");
	printf("---------\t\t--------\t\t------------\n");

	for ( i = 0; i < term; i++)	{
  		monthInt = prinBal * intRate / 12;
		princ = monthPay  - monthInt;
		prinBal -= princ;
		table [i][0] = princ;
		table [i][1] = monthInt;
		table [i][2] = prinBal;

		if ( prinBal <= 0)
			table [i][2] = 0;

		printf("$%.2lf\t\t$%.2lf\t\t$%.2lf\n", table[i][0], table[i][1], table[i][2]);
		
	}

return 0;

}
