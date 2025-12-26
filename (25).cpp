#include <stdio.h>

int main()
{
	int i;
	float arr[5],sum=0,avg;
	printf("Enter marks 5 numbers :");
	for(i=0; i<5; i++)
	
		scanf("%f", &arr[i]);
		for(i=0; i<5; i++) {
			sum+=arr[i];
		}
		
		avg= sum/5;
		printf("Average =%f\n", avg);
			return 0;
}
