package Java;

import java.util.Scanner;

public class _07ValidateAgeBetween18And45 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        short age = scanner.nextShort();
        scanner.close();

        if (age >= 18 && age <= 45) {
            System.out.println("Valid age");
        } else {
            System.out.println("Invalid age");
        }
    }
}
