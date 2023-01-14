// C program to calculate various aspects of a regular n-gon

#include <stdio.h>
#include <math.h>

int main (void) 

{
	int sides; 	//number of sides
	double r;	// radius 
				
	printf("Enter number of sides : ");	//prompt number of sides
	scanf ("%d", &sides); 
	
	printf("Enter radius (in) : ");		//prompt raduis 
	scanf ("%lf", &r);

	double angle = 360/sides;		// calculate angles in degrees
	double angle_rad = angle*(M_PI/180);	// convert angle from degrees to radians
	double cos_A = cos(angle_rad);		// calculate center angle using CosA
	double side = sqrt(2*pow(r, 2) - 2*pow(r, 2) *cos_A); //calculate side C in radians
	
        double p = sides*side; 			// calculate perimeter
	double p_feet = p/12;			// convert perimeter from invhes to feet	
	

	printf("Angle is %.2f radians (%.2f degrees)\n", angle_rad, angle);	// Answer angle degree and rads
	printf("Side is %.2f inches\n", side);					// Answer side length in inches
	printf(" Perimeter is %.2f inches and %.2f feet\n", p, p_feet);		// Answer perimeter in ft and in


	return (0);

} 
