#include<stdio.h>
int main ()
{
	FILE *s;
	s = fopen("as.txt","w");
	if (s == NULL)
	{
		printf("Error");
		return 1;
	}
	fprintf(s,"Welcome AS!\n");
	fprintf(s,"AGE = 18");
	fclose(s);
	printf("Done");
	return 0;
}
