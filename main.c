// Online C compiler to run C program online
#include <stdio.h>

int
main ()
{
  int a, b;
  double q, r;
  printf ("Enter the money given ny Santo\n");
  scanf ("%d", &a);
  printf ("Enter the money mentionned in bill\n");
  scanf ("%d", &b);
  q = (a / b);
  r = (a % b);
  printf ("Quotient =%0.0lf", q);
  printf ("Remainder =%0.0lf", r);
  return 0;
}
