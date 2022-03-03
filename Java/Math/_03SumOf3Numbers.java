package Java.Math;

import java.util.Scanner;

public class _03SumOf3Numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();

        scanner.close();

        int sum = num1 + num2 + num3;

        System.out.println(sum);

    }
}
