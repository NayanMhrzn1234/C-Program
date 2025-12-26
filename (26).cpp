#include <stdio.h>

int main()
{
	int i,n;
	int small, large, a[5];
	printf("enter the value of n :");
	scanf("%d",& n);
	for(i=0; i<n; i++)
	{
		printf("\n enter the %d th element:", i+1);
		scanf("%d", &a[i]);
	}
	printf(" The elements in the array are:");
	for(i=0; i<n; i++)
	printf("\t%d", a[i]);
	small=a[0];
     large=a[0];
     for(i=1; i<n; i++)
     {
     	if (a[i]<small)
     	small=a[i];
     	
     	if(a[i]>large)
     	large=a[i];
	 }
	 printf("\n the smallest element = %d and largest element = %d", small,large);
	   return 0;
}
