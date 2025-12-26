#include <stdio.h>

int main()
{
	int i;
	float arr[10];
	printf("enter marks 10 number : ");
	for(i=0; i<10; i++) {
		scanf("%f", &arr[i]);
	}
	
	printf("\n the entered numbers are : \n");
	for(i=0; i<10; i++)
	{
		printf("\n arr[%d]=%f", i, arr[i]);
	}
	
	return 0;
}
