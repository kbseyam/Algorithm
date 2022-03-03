package Java.Math;

import java.util.Scanner;

public class _01OddOrEven {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        int result = num % 2;

        scanner.close();

        if (result == 0) {
            System.out.println("Even");
        } else {
            System.out.println("Odd");
        }
    }
}
