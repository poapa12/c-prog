#include <stdio.h>

int fibSekvencne(int n)
{
    int predPredchozi = 0;
    int predchozi = 1;
    int fib;
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            fib = predPredchozi + predchozi;
            predPredchozi = predchozi;
            predchozi = fib;
        }
    }
    else
    {
        return n;
    }
    return fib;
}
int fibRekurzivne(int n)
{
    if (n > 1)
    {
        return fibRekurzivne(n - 1) + fibRekurzivne(n - 2);
    }
    else
    {
        return n;
    }
}

int main()
{
    printf("Fibonacciho posloupnost cisel\n");
    printf("Fib(0) = 0, Fib(1) = 1, n>1: Fib(n) = Fib(n-1) + Fib(n-1)\n");
    printf("  n\tFibSekv\tFibRek\n");
    for (int n = 0; n < 15; n++)
    {
        printf("%3i\t%3i\t%3i\n", n, fibSekvencne(n), fibRekurzivne(n));
    }
    return 0;
}