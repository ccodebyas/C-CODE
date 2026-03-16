#include<stdio.h>
int largest(int a, int b,int c)
{
	if (a > b && a > c)
	return a;
	else if (b > a && b > c)
	return b;
	else 
	return c;
}
int main()
{
	int s=3,a=4,b=5;
	int num = largest(s,a,b);
	printf("Largest number is %d",num);
}
