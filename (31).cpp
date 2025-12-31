#include <stdio.h>
#define M 2
#define N 4
int main() 
{
	int matrix[M][N],matrix2[M][N],sum[M][N],i,j;
	printf("Enter the elements of the matrix:\n");
	for (i=0; i<M; i++)
	{
	  for (j=0; j<N; j++) 
	   {
	   	scanf("%d", &matrix[i][j]);
	   }
	}
	 printf("\n The entered matrix is : \n");
	 for(i=0; i<M; i++)
	 {
	 	for	 (j=0; j<N; j++) {
		 
		 printf("%d\t", matrix[i][j]);
	 }
	 printf("\n");
    }
    printf("\n Entered the elements of the second matrix:\n");
    for(i=0;i<M; i++) {
    	for(j=0; j<N; j++)
    	{
    		sum[i][j]=matrix[i][j] + matrix2 [i][j];
		}
	}
	printf("\n The sum of the two matrices is: \n");
	for(i=0; i<M; i++) {
		for(j=0; j<N; j++)
		{
			printf("%d\t",  sum[i][j]);
		}
		printf("\n");
	}
    return 0;
}
