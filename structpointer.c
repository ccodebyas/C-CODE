#include<stdio.h>
#include<string.h>
struct Students
{
  char name[50];
  int age;
};

void
display (struct Students *a)
{
  printf ("%s", a->name);
  printf("%d",a->age);
}

int
main ()
{
  //struct Students {
  //      char name[50];
  //      int age;
//      };
  struct Students s;
  strcpy (s.name, "AS");
  s.age = 18;


  display(&s);
}
