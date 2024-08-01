#include <stdio.h>
#include <time.h>

long long sumUsingLoop(int N, int *steps) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
        (*steps)++;
    }
    return sum;
}

int main() {
    int N = 100;
    int steps = 0;
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    long long result = sumUsingLoop(N, &steps);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Sum using loop: %lld\n", result);
    printf("Steps executed: %d\n", steps);
    printf("Time taken: %f seconds\n", cpu_time_used);
    
    return 0;
}
