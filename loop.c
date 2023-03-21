#include <stdio.h>
/**
* main - is the entry point.
* Return: 0 success.
*/

int main(void)
{
	int i = 0;
	int j;
	while (i < 5)
{	
	j = 0; 	/* decleared j, 0 */
	while (j < 4)	/* nested while loop */
{	
	printf("%d\n", j); /* prints a decimal # if condition is satisified */
	j++;
}
	printf("\n"); /* prints a new line if condition is satisified */
	i++;
}
	return (0); /* Returns 0 if success */
}
