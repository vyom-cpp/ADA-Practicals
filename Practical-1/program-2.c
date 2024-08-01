#include <stdio.h>
#include <time.h>

long long sumUsingEquation(int N, int *steps)
{
    (*steps)++;
    return (long long)N * (N + 1) / 2;
}

int main()
{
    int N = 100;
    int steps = 0;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    long long result = sumUsingEquation(N, &steps);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum using equation: %lld\n", result);
    printf("Steps executed: %d\n", steps);
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
