#include <stdio.h>
 
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}
 
int main()
{
  int nbr, i = 0, j;
 
  printf("Enter the number of terms: ");
  scanf("%d", &nbr);
 
  printf("The first %d terms of the Fibonacci series are: \n", nbr);
 
  for (j = 1; j <= nbr; j++)
  {
    printf("%d\n", fibonacci(i));
    i++;
  }
 
  return 0;
}