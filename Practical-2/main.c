#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
    }
}

void generateAscendingArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

void generateDescendingArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }
}

void runSelectionSortTest(int a[], int n);
void runBubbleSortTest(int a[], int n);
void runInsertionSortTest(int a[], int n);
void runMergeSortTest(int a[], int n);
void runQuickSortTest(int a[], int n);

int main()
{
    srand(time(NULL));
    int n = 5000;
    int a[n];

    // Test Selection Sort
    generateRandomArray(a, n);
    runSelectionSortTest(a, n);

    generateAscendingArray(a, n);
    runSelectionSortTest(a, n);

    generateDescendingArray(a, n);
    runSelectionSortTest(a, n);

    // Test Bubble Sort
    generateRandomArray(a, n);
    runBubbleSortTest(a, n);

    generateAscendingArray(a, n);
    runBubbleSortTest(a, n);

    generateDescendingArray(a, n);
    runBubbleSortTest(a, n);

    // Test Insertion Sort
    generateRandomArray(a, n);
    runInsertionSortTest(a, n);

    generateAscendingArray(a, n);
    runInsertionSortTest(a, n);

    generateDescendingArray(a, n);
    runInsertionSortTest(a, n);

    // Test Merge Sort
    generateRandomArray(a, n);
    runMergeSortTest(a, n);

    generateAscendingArray(a, n);
    runMergeSortTest(a, n);

    generateDescendingArray(a, n);
    runMergeSortTest(a, n);

    // Test Quick Sort
    generateRandomArray(a, n);
    runQuickSortTest(a, n);

    generateAscendingArray(a, n);
    runQuickSortTest(a, n);

    generateDescendingArray(a, n);
    runQuickSortTest(a, n);

    return 0;
}
