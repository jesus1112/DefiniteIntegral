#include <stdio.h>

#define DX    (1E-6)   /* Delta x = 1x10-6 */

/* Function definition */
#define FX(x) ((x)*(x)*(x))


int main(void)
{
	double xa=0, xb=5;
	double x, s;
	
	/* Left Riemmann sum */
	for (x=xa,s=0; x<xb; x+=DX)
		s += FX(x)*DX;
	printf("Left Riemmann sum: %.15f\n", s);
	
	/* Midpoint sum */
	for (x=xa+DX/2.0,s=0; x<xb; x+=DX)
		s += FX(x)*DX;
	printf("Midpoint sum: %.15f\n", s);
	
	/* Trapezoidal sum */
	for (x=xa,s=0; x<xb; x+=DX)
		s += (FX(x)+FX(x+DX))/2.0*DX;
	printf("Trapezoidal sum: %.15f\n", s);
	
	return 0;
}
