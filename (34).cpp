#include <stdio.h>
#define ROW 4
#define COL 4
int main()
{
	int a[ROW][COL],i,j;
	printf("Enter the elements of a 4*4 matrix : \n");
	for(i=0; i<COL; i++) {
		for(j=0; j<ROW; j++) 
		
			scanf("%d", &a[i][j]);
			printf("\n");
	 }
	 printf("Original matrix : \n");
	 for(i=0; i<COL; i++) {
	 	for(j=0; j<ROW; j++)
	 	printf("%d\t", a[i][j]);
	 	printf("\n");
	    }
	 for(i=1; i<COL; i++) 
	   for(j=0; j<i; j++)
	   a[i][j]=0;
	   printf("Lower Triangular Matrix : \n");
	   for(i=0; i<COL; i++)
	   {
	   	for(j=0; j<ROW; j++)
	   	printf("%d\t", a[i][j]);
	   	printf("\n");
	   }
	   return 0;
	}
	

