#include <stdio.h>
#include <time.h>

int sum_using_recursion(int N, int *steps)
{
    (*steps)++;
    if (N == 1)
    {
        (*steps)++;
        return 1;
    }
    (*steps)++;
    return N + sum_using_recursion(N - 1, steps);
}

int main()
{
    int steps;
    clock_t start, end;
    double cpu_time_used;

    for (int N = 100; N <= 500; N += 100)
    {
        steps = 0;
        start = clock();
        int sum = sum_using_recursion(N, &steps);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Recursion - N = %d, Sum = %d, Steps = %d, Time = %f seconds\n", N, sum, steps, cpu_time_used);
    }
    return 0;
}