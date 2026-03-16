1#include<stdio.h>
int main()
{
	int n  ;
	printf("Enter Mumber to get factorial");
    scanf("%d",&n);
    if (n == 0)
    printf("1");
    else {
	int factorial = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		factorial *= i;
	}
	printf("%d",factorial);
	}
}
