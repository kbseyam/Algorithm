package Java;

import java.util.Scanner;

public class _06SwapNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        scanner.close();

        System.out.println("num1: " + num1 + " num2: " + num2);

        int temp = num1;
        num1 = num2;
        num2 = temp;

        System.out.println("num1: " + num1 + " num2: " + num2);
    }
}
