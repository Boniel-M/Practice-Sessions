#include <stdio.h>
/**
* area - area of a rectangle
* @L: Lengt
* @W: width of a rectangle
*Return: 0 on success.
*/

int area(int l, int w)
{
	int area;
	area = l * w;
}
/**
* main - entry point
* Return: 0 on success.
* 
*/

int main(void)
{
	int results;
	results = area(12,5);
	printf("%d\n", results);
	return (0);
}
