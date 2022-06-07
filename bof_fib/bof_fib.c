#include <stdio.h>
#include <stdlib.h>
#include <time.h>


unsigned long get_nth_fib(int n)
{
    unsigned long a = 0;
    unsigned long b = 1;
    unsigned long c = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    srand(time(0));
    unsigned long f;
    int r;
    int x = 0x00000001;
    unsigned long n = 0x00000000;
    int ok;

    r = rand() % 1000;
    f = get_nth_fib(r);

    printf("Guess the Fibonacci number (n):\n");
    scanf("%ld", &n);
    printf("Are you sure you sure?\n");
    read(0, &ok, 100);

    printf("n %lu | f %lu \n", n, f);

    if (n * x == f)
    {
        printf("RIGHT cs370_flag{-------------}\n");
    }
    else
    {
        printf("WRONG!\n");
    }
    return 0;
}
