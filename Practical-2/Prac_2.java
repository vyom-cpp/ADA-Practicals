import java.util.Arrays;
import java.util.Random;

public class Prac_2 { 
    static int steps = 0;


    // Selection Sort
    public static void selectionSort(int[] a, int n) { 
        for (int i = 0; i < n; i++) {
            steps++; 
            steps++;
            int minIndex = i;
            for (int j = i + 1; j < n; j++) { 
                steps++;
                steps++;
                if (a[minIndex] > a[j]) { 
                    minIndex = j; 
                    steps++;
                }
            }
            steps++;
            int temp = a[i];
            a[i] = a[minIndex]; 
            a[minIndex] = temp; 
            steps++;
            steps++; 
            steps++;
        }
        steps++;
    }
    

    // Bubble Sort
    public static void bubbleSort(int[] a, int n) { 
        boolean swap = false;
        steps++;
        for (int i = n - 1; i >= 0; i--) {
            steps++;
            int maxIndex = i; 
            steps++;
            for (int j = i - 1; j >= 0; j--) { 
                steps++;
                if (a[maxIndex] < a[j]) { 
                    steps++;
                    maxIndex = j; 
                    swap = true; 
                    steps++; 
                    steps++;
                }
            }
            steps++;
            int temp = a[i];
            a[i] = a[maxIndex]; 
            a[maxIndex] = temp; 
            steps++;
            steps++; 
            steps++;
            if (!swap) { 
                steps++; 
                steps++; 
                return;
            }
        }
        steps++;
    }


    // Insertion Sort
    public static void insertionSort(int[] a, int n) { 
        if (n <= 1) {
            steps++; 
            steps++; 
            return;
        }
        for (int i = 0; i < n; i++) { 
            steps++;
            int key = a[i]; 
            steps++;
            int j = i - 1; 
            steps++;
            while (j >= 0 && key < a[j]) { 
                steps++;
                a[j + 1] = a[j]; 
                steps++;
                j = j - 1; 
                steps++;
            }
            steps++;
            a[j + 1] = key; 
            steps++;
        }
        steps++;
    }


    // Merge Sort
    public static void merge(int[] a, int start, int mid, int end) {
        int[] temp = new int[5000]; 
        int i,j,k;
        i = start;
        j = mid + 1; 
        k = start; 
        steps++; 
        steps++; 
        steps++; 
        steps++; 
        steps++;

        while(k <= mid && j <= end) {
            steps++;
            if (a[k] <= a[j]) {
                steps++; 
                temp[i] = a[k]; 
                steps++;
                k++;
                steps++;
            }
            else {
                steps++; 
                temp[i] = a[j]; 
                steps++;
                j++;
                steps++;
            }
        i++;
        steps++;
        }
        steps++;

        if(k <= mid) {
            steps++;
            for(; k <= mid; k++) {
                steps++; 
                temp[i++] = a[k]; 
                steps++;
            }
            steps++;
        }
        else {
            steps++;
            for(; j <= end; j++) {
                steps++; temp[i++] = a[j]; 
                steps++;
            }
            steps++;
        }

        for(i = start; i <= end; i++) {
            steps++;
            a[i] = temp[i]; 
            steps++;
        }
        steps++;
    }


    // Merge Sort
    public static void mergeSort(int[] a, int start, int end) {
        if(start != end) {
            steps++;
            int mid = (end + start)/2; 
            steps++;
            mergeSort(a, start, mid); 
            steps++;
            mergeSort(a, mid + 1, end); 
            steps++;
            merge(a, start, mid, end); 
            steps++;
        }
    }

    public static int partition(int[] a, int start, int end) {
        int pivot = a[start]; 
        int cnt = 0; 
        steps++;
        steps++;
        for(int i = start + 1; i <= end; i++) {
            steps++;
            if(a[i] <= pivot) {
                steps++; 
                cnt++; 
                steps++;
            }
        }
        steps++;

        int pivot_index = start + cnt; 
        a[start] = a[pivot_index]; 
        a[pivot_index] = pivot;
        steps++; 
        steps++; 
        steps++;

        int i = start, j = end, temp = 0; 
        steps++;
        while(i < pivot_index && j > pivot_index) {
            steps++;
            while(a[i] <= pivot) {
                steps++; 
                i++;
                steps++;
            }
            steps++; 

            while(a[j] > pivot) {
            steps++; 
            j--;
            steps++;
            }
            steps++;
            if(i < pivot_index && j > pivot_index) {
                steps++; 
                temp = a[i]; 
                a[i++] = a[j];
                a[j--] = temp; 
                steps++; 
                steps++; 
                steps++;
            }
        }
        steps++; 
        steps++;
        return pivot_index;
}


    // Quick Sort
    public static void quickSort(int[] a, int start, int end) {
        if(start >= end) {
            steps++; 
            steps++; 
            return;
        }

        int p = partition(a, start, end); 
        steps++;
        quickSort(a, start, p-1); 
        steps++;
        quickSort(a, p+1, end); 
        steps++;
    }


    // Random
    public static void random(int[] arr, int size) {
        Random random = new Random(); 
        for(int i = 0; i < size; i++) {
            arr[i] = random.nextInt(1000);
        }
    }


    // Ascending
    public static void ascending(int[] arr, int size) {
        for(int i = 0; i < size; i++) {
            arr[i] = i+1;
        }
    }


    // Descending
    public static void descending(int[] arr, int size) {
        int num = size;
        for(int i = 0; i < size; i++) {
            arr[i] = num; num--;
        }
    }

    // Main
    public static void main(String[] arg) {
        int size = 5000;
        int[] arr = new int[size];

        //	random(arr, size);
        //	ascending(arr, size); descending(arr, size);
        System.out.println(Arrays.toString(arr));

        long startTime = System.currentTimeMillis();
        //	selectionSort(arr, size);
        //	bubbleSort(arr, size);
        //	insertionSort(arr, size);
        //	mergeSort(arr, 0, size - 1);
        quickSort(arr, 0, size-1);
        long endTime = System.currentTimeMillis(); 
        System.out.println(Arrays.toString(arr));
        System.out.println("Execution time: " + (endTime - startTime) + "ms, No. of steps: " + steps);
    }
}
