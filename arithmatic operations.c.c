#include <stdio.h>
int main()
{
	char ch;
	int x,y;
	
	printf("Enter any arithmatic operators from +,_,*,/,%\n");
	scanf("%c",&ch);
	printf("Enter any two values\n");
	scanf("%d%d",&x,&y);
	
	switch(ch)
	{
	case'+':
			printf("Addition of %d and %d is %d",x,y,x+y);
			break;
			
	case'-':
			printf("Substraction of %d and %d is %d",x,y,x-y);
			break;
			
	case'*':
		    printf("Multiplication of %d and %d is %d",x,y,x*y);
			break;
			
	case'/':
		    printf("Division of %d and %d is %d",x,y,x/y);
			break;
			
	case'%':
		    printf("Remainder of %d and %d is %d",x,y,x%y);
			break;
			
			default:
			 printf("Wrong choice");			
	}
	
	return 0;
}
