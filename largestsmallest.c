#include<stdio.h>
int
largest (int arr[], int size)
{
  int larger = arr[0];
 
  for (int i = 1; i < 5; i++)
    {
//      int larger = arr[0];
      if (arr[i] > larger)
	larger = arr[i];
	
    }
  return larger;

}

int
main ()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
    {
      printf ("Enter value for arr[%d].", i);
      scanf ("%d", &arr[i]);
    }

  int l = largest (arr, 5);
  printf ("Largest arr index is  and value is = %d", l);
}
