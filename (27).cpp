#include <stdio.h>

int main()
{
	int num[100], i,j,n,temp;
	printf("\n how many numbers you want to sort? : \t");
	scanf("%d", &n);
	for (i=0;  i<n; i++)
	scanf("%d",&num[i]);
	printf("\n the numbers before sorting are : ");
	for (i=0; i<n; i++)
	printf("%d\t",num[i]);
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(num[i]>num[j]) {
				temp=num[i];
				num[i]=num[j]; 
				num[j]=temp;
			}
			
		}
	}
	printf("\n The numbers in acsending order are : ");
	for(i=0; i<n; i++)
	printf("%d\t", num[i]);
	return 0;
}
