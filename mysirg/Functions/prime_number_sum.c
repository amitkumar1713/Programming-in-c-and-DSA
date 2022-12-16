//! Talkdown Approach.
//? C program to print a number as a sum of two prime number.

#include <stdio.h>
#include <conio.h>
int nextprime(int i);
int isprime(int i);
int main()
{
  int n;
  int flag=0;
  printf("Please enter a number=");
  scanf("%d", &n);
  for (int i = 2; i <= n; i = nextprime(i))
  {
    if ( isprime(n-i)==1)
    {
      printf("%d=%d+%d\n", n, i, n - i);
      flag=1;
    }
  }
  if(flag==0)
  {
    printf("Cannot be described as a sum of two prime numbers");
  }
}

int nextprime(int i)
{
  do
  {
    i++;
  } while (isprime(i) == 1);
  return i;
}

int isprime(int i)
{
  int prime;
  int j;
  // if (i == 0 || i == 1)
  // {
  //   prime=0;
  // }
   for(j=2;j<i;j++)
  {
    if(i%j==0)
    prime=0;
    break;
  }
  prime=1;
  return prime;
}
