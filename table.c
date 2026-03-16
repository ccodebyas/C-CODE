#include<stdio.h>
int main()
{
	int number;
	printf("Emter a number of which you want to print table");
    scanf("%d",&number);
    for ( int s = 1 ; s < 11 ; s++)
    {
    	printf("%d × %d = %d\n",number,s,s*number);
    	
    }
}
