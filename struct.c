#include<stdio.h>
int main()
{
	struct Students {
		char name[50];
		int age;
		float marks;
	};
	// pala
	struct Students pala;
	pala.age = 17;
	pala.marks = 92.8;
	printf("%d",pala.age);
	printf("\n%.2f",pala.marks);
    // dosra
    struct Students dosra ;
    dosra.age = 18,
    dosra.marks = 92.9;
    printf("\n%d",dosra.age);
    printf("\n%.2f",dosra.marks);
    
}
