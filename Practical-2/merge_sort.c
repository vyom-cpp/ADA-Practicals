#include <stdio.h>

int steps = 0;

void merge(int a[], int low, int mid, int high)
{
    int temp[5000];
    int i, j, k;
    steps += 3; // for int declarations
    k = low;
    j = mid + 1;
    i = low;
    steps += 3; // for three assignments
    while (k <= mid && j <= high)
    {
        steps += 2; // for while condition and logical AND
        if (a[k] <= a[j])
        {
            temp[i] = a[k];
            k++;
        }
        else
        {
            temp[i] = a[j];
            j++;
        }
        i++;
        steps += 4; // for four assignments
    }
    if (k <= mid)
    {
        for (; k <= mid; k++)
        {
            temp[i++] = a[k];
            steps += 2; // for for-loop increment and assignment
        }
    }
    else
    {
        for (; j <= high; j++)
        {
            temp[i++] = a[j];
            steps += 2; // for for-loop increment and assignment
        }
    }
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i];
        steps++; // for assignment
    }
    steps++; // for outer loop condition
}

void merge_sort(int a[], int low, int high)
{
    if (low < high)
    {
        steps++; // for if condition
        int mid = (low + high) / 2;
        steps++; // for assignment
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void runMergeSortTest(int a[], int n)
{
    steps = 0;
    merge_sort(a, 0, n - 1);
    printf("Merge Sort Steps: %d\n", steps);
}
