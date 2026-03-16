#include<stdio.h>
int main()
{
	int firstNumber;
	printf("Enter Number");
	scanf("%d",&firstNumber);
	if (firstNumber % 2 == 0) 
	printf("Your Entered number %d is even.",firstNumber);
	else
	printf("Your Entered number %d is odd.",firstNumber);
	
}
