/*Create a function to find the nth element of fibronacci series*/
//*The Fibonacci series is the sequence of numbers(also called Fibonacci numbers), where every number is sum of the preceding two numbers, such that the first two terms are '0' and '1'. In some older versions of the series, the term '0' might be omitted. A Fibonacci series can thus be given as, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,The Fibonacci series is the sequence of numbers(also called Fibonacci numbers), where every number is sum of the preceding two numbers, such that the first two terms are '0' and '1'. In some older versions of the series, the term '0' might be omitted. A Fibonacci series can thus be given as, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

#include <stdio.h>
#include <conio.h>

int fib(int n);

int main()
{
    int i;
    printf("Please enter the position=");
    scanf("%d", &i);

    printf("The nth element in fibronacci series is %d\n", fib(i));

    return 0;
    getch();
}

int fib(int n)
{
    if (n == 1 || n == 2)
        return (1);
    return (fib(n - 1) + fib(n - 2));
}