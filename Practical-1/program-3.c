#include <stdio.h>
#include <time.h>

long long sumUsingRecursion(int N, int *steps)
{
    (*steps)++;
    if (N == 0)
        return 0;
    return N + sumUsingRecursion(N - 1, steps);
}

int main()
{
    int N = 100;
    int steps = 0;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    long long result = sumUsingRecursion(N, &steps);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum using recursion: %lld\n", result);
    printf("Steps executed: %d\n", steps);
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}