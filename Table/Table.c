#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter your no. ");
  scanf ("%d", &a);
  for (int i = 1; i < 11; i++)
    {
      printf ("%d x %d = %d\n", a, i, i * a);
    }

  return 0;
}
