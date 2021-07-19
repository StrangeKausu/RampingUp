#include <stdio.h>

int
main ()
{
  float num1, num2, add, minus, mul, div;
  char ch;
  do
    {
      printf ("Please Enter your 1st Number : ");
      scanf ("%f", &num1);
      printf ("Please Enter your 2nd Number : ");
      scanf ("%f", &num2);

      printf ("Operator Menu\n");
      printf ("1. +\n");
      printf ("2. -\n");
      printf ("3. *\n");
      printf ("4. /\n");

      int choice;
      printf ("Enter your choice (1-4) : ");
      scanf ("%d", &choice);

      switch (choice)
	{
	case 1:
	  add = num1 + num2;
	  printf ("%.3f\n", add);
	  break;

	case 2:
	  minus = num1 - num2;
	  printf ("%.3f\n", minus);
	  break;

	case 3:
	  mul = num1 * num2;
	  printf ("%.3f\n", mul);
	  break;

	case 4:
	  div = num1 / num2;
	  printf ("%.3f\n", div);
	  break;

	default:
	printf ("WRONG CHOICE\n");

	}
    printf ("Want to continue (y/n)? : ");
    scanf ("%s", &ch);
    printf ("\n");

    }
  while (ch == 'y' || ch == 'Y');



  return 0;
}
