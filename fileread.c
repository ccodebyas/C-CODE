#include<stdio.h>
int main ()
{
	FILE *s;
	char line[100];
	s = fopen("as.txt","r");
	if (s == NULL)
	{
		printf("ERROR");
		return 1;
	}

	while (fgets(line,100,s)){
		printf("%s",line);
	}
	fclose(s);
	return 0;
}
