#include <stdio.h>

int main ()
{
	int n = 1234;
	printf("n = %d", n);
	printf("\nn = %6d", n);
	printf("\nn = %2d", n);
	printf("\nn = %-6d", n);
	printf("\nn = %06d", n);
	return 0;
}
