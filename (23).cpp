#include <stdio.h>

int main()
{
	int num;
	int rev=0;
	int digit;
	printf("\n enter the value of num : ");
	scanf("%d", &num);
	printf("\n enter the number to be reversed : \t");
	scanf("%d", &num);
	if (num>=1000 && num<=999)
	{ 
	
	
		while (num!=0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	printf("\n the reversed number is : ")
	}
}
