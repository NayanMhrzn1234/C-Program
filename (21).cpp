#include <stdio.h>
#include <math.h>

int main()
{
	int n,x,sum=0,i;
	 printf("\n enter the value of x :");
	 scanf("%d", &x);
	 printf("enter the value of n  ");
	 scanf("%d", &n);
	 
	 for(i=1; i<=n; i++)
	 {
	 	if 
	 	(i%2==0) {
	 		sum=sum-pow(x,i);
		 }
		 else
		 sum=sum+pow(x,i);
	 }
	  printf("sum=%d",sum);
	  return 0;
}
