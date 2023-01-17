// Program to find the geatest common divisor 
// of two nonneqative integer values

#include <stdio.h>

int main ()

{
	int u, v, temp;

	printf("Please type in two nonnegative integers.\n");
	scanf ("%i%i", &u, &v);

	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf ("Their greatest common divisor is %i\n", u);

	return 0;

} 	
