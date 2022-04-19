#include <stdio.h>

int
main ()
{
  int amount_given, b;
  int q, r;
  scanf ("%d", &amount_given);
  scanf ("%d", &b);
  q = (amount_given / b);
  r = (amount_given % b);
  printf ("%d", q);
  printf ("\n%d", r);
  return 0;
}
