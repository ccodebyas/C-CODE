#include<stdio.h>
int main(){
	int arr[5];
	for (int i = 0 ; i<5; i++)
	{
		printf("Enter Number for idnex arr[%d].",i);
		scanf("%d",&arr[i]);
	}
	printf("Arrays values after reverse.");
	for (int s = 4 ; s >= 0 ; s--)
	{
		printf("\nValue of arr[%d]= %d", s,arr[s]);
	}
}
