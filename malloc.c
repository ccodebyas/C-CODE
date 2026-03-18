#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("How many numbers ?:");
	scanf("%d",&n);

	int *arr = malloc(n * sizeof(int));

	if (arr == NULL){
	printf("Memory Allocation Failed!");
	return 1;
	}

	for (int i = 0 ; i< n ; i++)
	{
		printf("Enter Number %d:",i+1);
		scanf("%d",&arr[i]);
	}

	for (int s = 0 ; s < n ; s++)
	{
		printf("Your Number %d value is %d.\n",s+1,arr[s]);
		
	}
}
