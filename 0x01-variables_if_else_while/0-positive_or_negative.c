#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - serves as entry point for the code
 *
 * return: Returns zero when successful else returns non zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
	printf("%d is positive\n",n);
	}
	else if (n == 0){ 
	printf("%d is zero\n",n);
	}
	else if (n < 0){ 
	printf("%d is negative\n",n);
	}
	else{ } 
	return (0);
}
