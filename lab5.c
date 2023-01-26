// Program to use one counter and on sentinel controlled loop
#include <stdio.h>
#include <math.h>
int main ()
{
 int num;
 int i;
 int again = 1; // intial condition for while


 do
 {
 int sum = 0; // declare sum so value not retained bewteen loop
 printf("Enter an integer: > "); // prompt input
 scanf (" %d", &num);
 for(i = 1; i <= num; i++) // loop conditon
 {
 sum += pow(i, 2); // calculate sum of square
 }
 printf("The sum of the squares of integers from 0 to %d is %d\n\n",num, sum);
 printf("Would you like to go again? (1 for yes, 0 for no) > ");
 scanf (" %d",&again);
 
 }
 while(again == 1); // continue


 return 0;
} 
