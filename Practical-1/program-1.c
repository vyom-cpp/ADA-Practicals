#include <stdio.h>
#include <time.h>

// Function to calculate sum using loop
long long sumUsingLoop(int N)
{
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    return sum;
}

// Function to measure the execution time
double measureTime(int N)
{
    clock_t start, end;
    start = clock();
    sumUsingLoop(N);
    end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

int main()
{
    int inputs[] = {100, 200, 300, 400, 500};
    int numInputs = sizeof(inputs) / sizeof(inputs[0]);
    double times[numInputs];

    for (int i = 0; i < numInputs; i++)
    {
        int N = inputs[i];
        times[i] = measureTime(N);
    }

    printf("N\tTime\n");
    for (int i = 0; i < numInputs; i++)
    {
        printf("%d\t%f\n", inputs[i], times[i]);
    }

    return 0;
}
