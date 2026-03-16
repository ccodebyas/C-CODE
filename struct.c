#include<stdio.h>
#include<string.h>
int main()
{
	struct Students {
		char name[50];
		int age;
		float marks;
	};
	// pala
	struct Students pala;
	strcpy(pala.name,"AS");
	pala.age = 17;
	pala.marks = 92.8;
	printf("%s",pala.name);
	printf("\n%d",pala.age);
	printf("\n%.2f",pala.marks);
    // dosra
    struct Students dosra ;
    strcpy(dosra.name,"SA");
    dosra.age = 18;
    dosra.marks = 92.9;
    printf("\n%s",dosra.name);
    printf("\n%d",dosra.age);
    printf("\n%.2f",dosra.marks);
    
}
