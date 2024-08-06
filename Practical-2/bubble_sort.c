#include <stdio.h>

int steps = 0;

void BubbleSort(int a[], int n)
{
    int swap_flag, temp;
    steps++; // for int declarations
    for (int i = 0; i < n - 1; i++)
    {
        steps++; // for loop increment
        swap_flag = 0;
        steps++; // for assignment
        for (int j = 0; j < n - i - 1; j++)
        {
            steps++; // for inner loop increment
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap_flag = 1;
                steps += 4; // for four assignments
            }
            steps++; // for if condition
        }
        if (swap_flag == 0)
        {
            steps++; // for if condition
            return;
        }
        steps++; // for if condition
    }
    steps++; // for outer loop condition
}

void runBubbleSortTest(int a[], int n)
{
    steps = 0;
    BubbleSort(a, n);
    printf("Bubble Sort Steps: %d\n", steps);
}
