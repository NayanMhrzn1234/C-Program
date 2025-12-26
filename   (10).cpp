#include <stdio.h>

int main()
{
	int num;
	printf("enter a number to be tested:");
	scanf("%d", &num);
	if (num <0) {
		printf("\n the number %d is negative", num);
	}
	else if (num >0) {
		printf("\n the number %d is positive", num);
	}
	return 0;
}
