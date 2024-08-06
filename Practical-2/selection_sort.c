#include <stdio.h>

int steps = 0;

void SelectionSort(int a[], int n)
{
    int MinIndex, temp;
    steps++; // for int declarations
    for (int i = 0; i < n - 1; i++)
    {
        steps++; // for loop increment
        MinIndex = i;
        steps++; // for assignment
        for (int j = i + 1; j < n; j++)
        {
            steps++; // for inner loop increment
            if (a[MinIndex] > a[j])
            {
                MinIndex = j;
                steps++; // for assignment
            }
            steps++; // for if condition
        }
        if (MinIndex != i)
        {
            temp = a[MinIndex];
            a[MinIndex] = a[i];
            a[i] = temp;
            steps += 3; // for three assignments
        }
        steps++; // for if condition
    }
    steps++; // for outer loop condition
}

void runSelectionSortTest(int a[], int n)
{
    steps = 0;
    SelectionSort(a, n);
    printf("Selection Sort Steps: %d\n", steps);
}
