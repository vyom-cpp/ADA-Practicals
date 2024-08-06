#include <stdio.h>

int steps = 0;

void quicksort(int q[], int lb, int ub)
{
    if (lb < ub)
    {
        steps++; // for if condition
        int flag = 1;
        int i = lb, j = ub + 1, key = q[lb];
        steps += 3; // for three assignments
        while (flag == 1)
        {
            steps++; // for while condition
            i++;
            steps++; // for increment
            while (q[i] < key)
            {
                steps++; // for inner while condition
                i++;
                steps++; // for increment
            }
            j--;
            steps++; // for decrement
            while (q[j] > key)
            {
                steps++; // for inner while condition
                j--;
                steps++; // for decrement
            }
            if (i < j)
            {
                int t1 = q[i];
                q[i] = q[j];
                q[j] = t1;
                steps += 3; // for three assignments
            }
            else
            {
                flag = 0;
                steps++; // for assignment
            }
            steps++; // for if condition
        }
        int t2 = q[lb];
        q[lb] = q[j];
        q[j] = t2;
        steps += 3; // for three assignments
        quicksort(q, lb, j - 1);
        quicksort(q, j + 1, ub);
    }
}

void runQuickSortTest(int a[], int n)
{
    steps = 0;
    quicksort(a, 0, n - 1);
    printf("Quick Sort Steps: %d\n", steps);
}
