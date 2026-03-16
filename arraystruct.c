#include<stdio.h>
#include<string.h>
struct Students 
{
  char name[10];
  int age;
  float marks;
};
int
main ()
{
struct Students s[3];
/*{
		char name[10];
		int age;
		float marks;
	} */
  for (int i = 0; i < 3; i++)
    {
      printf ("Name of Student 1 index s[%d]", i);
      scanf (" %s", s[i].name);
      printf ("Age of Student 1 index s[%d]", i);
      scanf ("%d",& s[i].age);
       printf ("Marks  of Student 1 index s[%d]", i);
      scanf ("%f", &s[i].marks);
    }

  for (int j = 0; j < 3; j++)
    {
      printf ("\nName of Student 1 index s[%d] is %s ", j, s[j].name);
      //   scanf("%s",s%d],name);
      printf ("\nAge of Student 1 index s[%d] is %d", j, s[j].age);
      //  scanf("%d",s[%d],age)
      printf ("\nMarks  of Student 1 index s[%d] is %f", j, s[j].marks);
      //  scanf("%f",s[%d].marks);
    } 
}

