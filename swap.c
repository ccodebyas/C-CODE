#include<stdio.h>
int
main ()
{
  int a = 3;
  int b = 9;
  printf("VALUEs of a = %d , b = %d",a,b);
  a = a + b;			// 12
  b = a - b;			// 3
  a = a - b;			//  9
  printf("\nAfter swap a = %d\nb = %d", a, b);
}
