#include<stdio.h>
//struct blueprints
struct Students {
	char name[10];
	int age;
	float marks;
};

// function for save to file 
// student.txt

void save(struct Students s)
{
	FILE *f;
	f = fopen("student.txt","a");
	if (f == NULL)
	{
		printf("Error while opening..");
		
	}

	fprintf(f,"%s  %d  %.2f\n",s.name,s.age,s.marks);
	printf("Student Data Saved!.");
	printf("%s  %d  %f",s.name,s.age,s.marks);
	fclose(f);
}

// func for load data
void load()
	{

	printf("\nLoading..");
		FILE *f;
		f = fopen("student.txt","r");
		if (f == NULL)
		printf("No Data");

        char name[10];
        int age;
        float marks;
		while (fscanf(f," %s  %d  %f",name,&age,&marks) != EOF)
		{
			printf("\nName %s \nAge %d \nMarks %.2f",name,age,marks); 
		}
	}

int main(){
	struct Students s;
	printf("Enter Name:");
	scanf("%s",s.name);
	printf("Enter Age:");
	scanf("%d",&s.age);
	printf("Enter Marks:");
	scanf("%f",&s.marks);
   // printf("Details are \nName  %s ,age  %d,marks   %f",s.name,s.age,s.marks);
    save(s);
    load();
    return 0;
}
