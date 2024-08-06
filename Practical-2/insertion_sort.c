#include <stdio.h>

int steps = 0;

void InsertionSort(int a[], int n)
{
    int i, j, key;
    steps++; // for int declarations
    for (j = 1; j < n; j++)
    {
        steps++; // for loop increment
        key = a[j];
        i = j - 1;
        steps += 2; // for two assignments
        while (i >= 0 && a[i] > key)
        {
            steps += 2; // for while condition and logical AND
            a[i + 1] = a[i];
            i = i - 1;
            steps += 2; // for two assignments
        }
        a[i + 1] = key;
        steps++; // for assignment
    }
    steps++; // for outer loop condition
}

void runInsertionSortTest(int a[], int n)
{
    steps = 0;
    InsertionSort(a, n);
    printf("Insertion Sort Steps: %d\n", steps);
}
