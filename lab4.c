// Looping program with if and else

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
	int	number;
	int	again = 1;
	char	letter;

	do 
	{
	printf("Enter a letter or number from the keyboard :\n");	//User prompt
	scanf (" %c",&letter);
	
	if((letter>='a' && letter <='z')||(letter >='A' && letter <='Z')) //if its a letter
	{ 
	
	if(isupper(letter)==0)
	printf("The uppercase of that letter is %c\n",toupper(letter));	  // if uppercase

	else	
	printf("The lowercase of that letter is %c\n",tolower(letter));	 // if lowercase	

	}
	else if(letter >='0' && letter <='9')				// if its a number
	{
	
	number = letter -'0';
	printf("number= %d\n",number);

	if(number %2 == 0) 						// if even number
	printf(" %d is an even number\n",number);

	else								// if odd number
	printf(" %d is an odd number\n", number);
	}	

	else								// if not number or letter	
	
	printf("You entered an invalid character.\n");
	printf("Would you like to go again? Enter 1 for yes, 0 for no.\n");
	scanf(" %d",&again);
	
	if(again == 1)							// if want to go again
	continue;
	
	else if(again == 0)						// if not want to go again
	break;

	else								// if invalid input
	{

	printf("Invalid input. Enter a 1 to go again, or a 0 to quit:\n");
	scanf (" %d",&again);
	}
	}
	while(again ==1);

	return 0;
} 	
