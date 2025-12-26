#include <stdio.h>

int main()
{
	int sum = 0, i = 1;
	while (i <= 100) {
		sum += 1;
		i++;
	}
	printf("sum of integers from 1 to 100 is : %d \n", sum);
	return 0;
}
