#include<stdio.h>
main()
{
	float i,num,fact=1;
	printf("Enter a number:");
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %f=%f",num,fact);
}
