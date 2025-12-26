#include <stdio.h>

int main()
{
	 int a = 12, b = 7, c =6;
    printf("a*b && a/c %d",(a*b && a/c));
    printf("\n a>b && b>c %d", (a>b && b>c));
    printf("\n a>b || b>c %d", (a>b || b>c));
    printf("\n a>c || c>a %d", (c>a || c>a));
    a=a+1;
    printf("\n a %d",a);
	return 0;
}
   


