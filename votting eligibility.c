#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	printf("You are eligible for votting");
	else
	printf("You are eligible for votting after %d",18-age);
	
}
