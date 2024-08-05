#include <stdio.h>
#include <time.h>

int sum_using_loop(int N, int *steps)
{
    int sum = 0;
    (*steps)++;
    for (int i = 1; i <= N; i++)
    {
        (*steps)++;
        sum += i;
        (*steps)++;
    }
    (*steps)++;
    return sum;
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
        int sum = sum_using_loop(N, &steps);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Loop - N = %d, Sum = %d, Steps = %d, Time = %f seconds\n", N, sum, steps, cpu_time_used);
    }
    return 0;
}