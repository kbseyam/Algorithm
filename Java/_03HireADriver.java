package Java;

import java.util.Scanner;

public class _03HireADriver {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Age: ");
        short age = scanner.nextShort();
        System.out.print("Driver license: ");
        boolean dL = scanner.nextBoolean();
        scanner.close();

        if (age > 21 && dL) {
            System.out.println("Hired");
        } else {
            System.out.println("Rejected");
        }
    }
}
