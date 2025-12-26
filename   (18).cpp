#include <stdio.h>

int main()
{
	int x;
	for (x=1; x<=5; x++)
	  {
	  	if (x==3)
	  break;
	  printf("%d", x);
	  }
	  printf("\n finished loop \n");
	  return 0;
}
