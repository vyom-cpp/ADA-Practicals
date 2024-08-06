import java.util.Scanner;

public class Prac_1 { 
    static int count = 0; 
    static int count1 = 0; 
    static int count2 = 0;
    public static int sumUsingLoop(int n) { 
        int sum = 0;
        count++;
        for (int i = 0; i <= n; i++) { 
            count++;
            sum = sum + i; count++;
        }
        count++; 
        count++; 
        return sum;
    }

    public static int sumUsingEquation(int n) { 
        count1++;
        return (n * (n + 1)) / 2;
    }

    public static int sumUsingRecursion(int n) { 
        if (n == 1) {
            count2++;
            count2++;
            return 1;
        }
        count2++;
        return n + sumUsingRecursion(n - 1);
    }

    public static void main(String[] args) { 
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter any number between 100 to 500: "); 
        int num = scanner.nextInt();

        scanner.close();

        int sum = 0;

        long startTime = System.currentTimeMillis(); 
        sum = sumUsingLoop(num);
        long endTime = System.currentTimeMillis(); 
        System.out.println("\nLoop:"); 
        System.out.println("Sum = " + sum);
        System.out.println("Time taken : " + (endTime - startTime) + "ms, No. of steps: " + count);

        startTime = System.currentTimeMillis(); 
        sum = sumUsingEquation(num); 
        endTime = System.currentTimeMillis(); 
        System.out.println("\nEquation:"); 
        System.out.println("Sum = " + sum);
        System.out.println("Time taken : " + (endTime - startTime) + "ms, No. of steps: " + count1);

        startTime = System.currentTimeMillis(); 
        sum = sumUsingRecursion(num); 
        endTime = System.currentTimeMillis(); 
        System.out.println("\nrecursion:"); 
        System.out.println("Sum = " + sum);
        System.out.println("Time taken : " + (endTime - startTime) + "ms, No. of steps: " + count2);
    }
}