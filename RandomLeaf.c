/* code for making a list of pseudorandom numbers in a reproducible way */

	#include <stdio.h>
	#include <stdlib.h>

	int main () 
	{
		#define MAXIMUM 3 /* One less than max desired */
		#define REPS 345/* No. of vouchers */
		#define SEED 29011993 /* Reproducable seed */
		int i;
		
		/* b/c it's pseudorandom for reproducibility */
		srand(SEED);
		
		for( i = 1 ; i < REPS ; i++ ) 
		{
			printf("Random Leaf %d\n", (rand() % MAXIMUM)+1);
		}
		
		return(0);
	}
