#include<stdio.h>
#include<stdlib.h>
int main ()
{
/*	int n;
	int in;
	int sn;
	printf("How many Numbers?");
	scanf("%d",&n);
*/
    int in;
	int *arr = malloc(3* sizeof(int));
	if (arr == NULL)
	{
		printf("Malloc Failed");
		return 1;
	}

	for (in = 0; in < 3 ; in++ ){
		printf("Number %d;\n",in+1);
		scanf("%d",&arr[in]);
		printf("Entered %d :\n",arr[in]);
	}

	arr = realloc(arr,5* sizeof(int));

	for (; in < 5 ; in++)
	{
		printf("Number %d:\n",in+1);
		scanf("%d",&arr[in]);
	}

// printf("%d",arr[2]);
	for (int i = 0 ; i < 5 ; i++)
	{
		printf("Number %d is %d\n",i+1,arr[i]);
	}
	free(arr);
}
